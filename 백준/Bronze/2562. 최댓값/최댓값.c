#define _CRT_SCURE_NO_WARNINGS
#include <stdio.h>
int main ()
{
    int arr [9]; //숫자 9개를 담을 배열 선언
    int index = 0;  //최댓값 배열 인덱스
    int max = 0; //최댓값
    int i; //for문 인자 선언

    for(i=0; i<9; i++) //숫자 9개 입력받기
    {
        scanf("%d", &arr[i]);
    }
    
    for (i=0; i<9 ; i++){ //최댓값 저장 반복문
        if (arr[i] > max){ //배열의 i번째 값이 현재 저장된 최댓값보다 큰지 비교
            max = arr[i]; //크다면 최댓값에 배열 값 저장
            index = i+1; //최댓값이 몇번째 값인지 index 저장, 배열시작값이 0이라 +1하여 저장
        }
        else
            continue; //다시 조건검사 위치로 이동
    }

    printf("%d\n%d", max, index);

    return 0;
}
