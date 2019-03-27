#!/bin/sh

cat lcrs.txt > data.txt  
# write lcrs.txt to data.txt to prevent the datas lost due to the wrong operation

sed -i 's/ /\n/g' data.txt  # change the space to link break
grep -n '#' data.txt  # find the '#'

sed '1,21 d' data.txt > data1.txt  # delete the content of 1-21 lines to get the pure digital text

cat data1.txt | xargs > p_data.txt
sed -i 's/ /\n/g' p_data.txt
sed -i 'N;N;N;s/\n/ /g' p_data.txt  # reshape the pure digital text to 4 column

echo 'a)' > result.txt
sort -n -k1 -t ' ' p_data.txt > p_data1.txt

head -n1 p_data1.txt >> result.txt
tail -n1 p_data1.txt >> result.txt  # the results of question a)

echo 'b)' >> result.txt
sort -n -k4 -t ' ' p_data.txt > p_data2.txt 

head -n1 p_data2.txt >> result.txt
tail -n1 p_data2.txt >> result.txt  # the results of question b)










