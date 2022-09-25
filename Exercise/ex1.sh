#!/bin/bash
mkdir VE280;
cd VG101;
ls -l;
cp *.txt ../VE280;
cd ..;
mv VG101 2022Summer;
cd VE280;
mkdir Project Exercise Exams;
cat pointer.txt;
cat pointer.txt > pointer_review.txt;
diff pointer.txt pointer_review.txt;
rm -f pointer.txt;

