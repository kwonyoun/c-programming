#include <stdio.h>

void main(void){

    int num = 0;
    int odd_total_num = 0;
    int even_total_num = 0;

    printf("202434-363701 권윤진입니다!\n");
    printf("-----------------------------\n");
    printf("1~100사이 숫자를 입력 하세요 : \n");
    scanf("%d", &num);

    //num이 100이하이면~.
    if (num<=100){
        //num이 1보다 크면 실행.
        while (num>=1){
            //홀수일때/나머지가 1일때
            if (num%2 == 1)
            {
                //홀수를 더한다
                odd_total_num += num;

            } 
            //짝수일때/나머지가 0일때
            else if(num%2 ==0){
                //짝수를 더한다
                even_total_num += num;
            }
            //num을 1씩 내려 다시 프로그램 실행. 0일 때 종료.
            num--;
        } 
        printf("홀수 값의 총 합계 : %d \n", odd_total_num);
        printf("짝수 값의 총 합계 : %d \n", even_total_num);

    } else {
        //설정 범위가 아니면 else문 실행
        printf("입력 값이 100이 넘습니다\n");
    }

    // if (num<=100){
    //     for(num; num>=1; num--){
    //         if (num%2 ==1){
    //             odd_total_num= odd_total_num + num;
    //         }
    //         else if(num%2 ==0){
    //             even_total_num = even_total_num = num;
    //         }
    //     }
    //     printf("홀수 값의 총 합계 : %d \n", odd_total_num);
    //     printf("짝수 값의 총 합계 : %d \n", even_total_num);

    // } else {
    //     printf("입력 값이 100이 넘습니다\n");
    // }
}