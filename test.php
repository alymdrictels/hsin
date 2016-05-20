<?php

$args = $_SERVER['argv'];

array_shift($args);

list($namespace, $taskname) = explode('/', array_shift($args));

$tmp = glob("{$namespace}/{$taskname}.cpp");
$solutionPath = array_pop($tmp);

if (!empty($solutionPath))
{
  exec("g++ {$solutionPath} -std=c++0x -O2 -static -s -lm", $o, $status);
  if ($status !== 0) {
    echo 'failure compiling';
    return 1;
  }
  /* try test cases */

  $testCases = glob("{$namespace}/tests/{$taskname}/*in*");

  if (empty($testCases)) {
    echo "test cases not found\n"; return 1;
  } else {
    $testCases = array_filter($testCases, function($val){
      return strpos($val,'dummy') === false;
    });

    /* sort them nicely by index*/
    usort($testCases, function($a,$b) {
      $t1 = explode('.', $a); $t2 = explode('.', $b);
      return array_pop($t1) > array_pop($t2);
    });

    foreach($testCases as $index => $testcase) {
      $str = explode('.', $testcase);
      $index = array_pop($str);
      $tmp = explode('/',array_shift($str));
      $testName = array_pop($tmp);

      $expected = trim(file_get_contents("{$namespace}/tests/{$taskname}/{$testName}.out.{$index}"));
      $expected = explode(PHP_EOL, $expected);
      $actual = null;
      exec("./a.out < {$testcase}", $actual);

      $nExpected = count($expected);
      $nActual = count($actual);

      $len = $nActual > $nExpected ? $nActual : $nExpected;
      printf("%15s %15s %15s\n",
       "test $index", 'actual', 'expected', 'status'
     );

      for ($i = 0; $i < $len; $i++) {
        $a = $expected[$i];
        $b = $actual[$i];
        printf("%15s %15s %15s\n",
         isset($b) ? trim($b) : '',
         isset($a) ? trim($a) : '',
         (isset($a) && isset($b))
         ? (trim($a) == trim($b) ? 'OK' : 'X') : ''
        );
        unset($a, $b);
      }
    }
  }
} else {
  echo "nope. try again\n";
}

return 0;
