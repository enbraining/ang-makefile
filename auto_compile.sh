#!/bin/bash

echo "-- 자동 컴파일 및 실행 --"
echo "포맷: ch{단원}_{번호}.c"
echo ""

read -p "컴파일할 파일의 단원을 입력해주세요: " a
read -p "컴파일할 파일의 번호를 입력해주세요: " b

echo "-- 실행 결과 --"

gcc -o ch${a}_${b}.out ch${a}_${b}.c
./ch${a}_${b}.out
