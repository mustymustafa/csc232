#!/bin/bash
sum = 0
i=1
total="$#"
for number in "$@"
echo "Number $i is $number\n"
sum=$((sum + number))
i=$((i + 1))
done

average=$(bc -1 <<< "$sum/total")
echo "The average is $average\n"
 