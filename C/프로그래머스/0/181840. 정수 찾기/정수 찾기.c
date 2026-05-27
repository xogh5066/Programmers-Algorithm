#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len, int n) {
    int answer = 0;
    for(int i = 0; i < num_list_len; i++) // 0 부터 길이만큼 반복
        if(num_list[i] == n) // 리스트 == n (0~리스트길이)만큼 확인
        {
            answer = 1;
            break;
        }
    return answer;
}