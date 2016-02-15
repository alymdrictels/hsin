#!/bin/bash
for i in 1 2 3 4 5 6
do
   mkdir kolo"$i"
   wget -qO- -O tmp.zip http://hsin.hr/honi/kolo"$i"_testpodaci.zip && unzip tmp.zip -d kolo"$i"/tests && rm tmp.zip
done
