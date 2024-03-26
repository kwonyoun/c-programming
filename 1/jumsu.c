#include <stdio.h>

int main(void){

    int jumsu;
    
    printf("202434-363701 권윤진입니다!\n");
    printf("-----------------------------\n");
    printf("0에서 100점수 사이의 점수를 입력하세요\n");
    scanf("%d", &jumsu);

    /**
     * switch-case문
     * */

    //학점 계산을 위해 10단위로 분류함.
    switch (jumsu/10){

        //jumsu가 10 or 9일때 실행
        case 10:
        case 9:
            // 90~100점은 A학점
            printf("%d점은 A학점입니다.\n", jumsu); 
            break; //위 구문이 실행되는 break

        //jumsu가 8일때 실행
        case 8:
            // 80~90점은 B학점
            printf("%d점은 B학점입니다.\n", jumsu);
            break; //위 구문이 실행되는 break


        //jumsu가 7일때 실행
        case 7:
            //70~80점은 C학점
            printf("%d점은 C학점입니다.\n", jumsu);
            break; //위 구문이 실행되는 break


        //jumsu가 6일때 실행
        case 6:
            //60~70점은 D학점
            printf("%d점은 D학점입니다.\n", jumsu);
            break; //위 구문이 실행되는 break


        //jumsu가 위 경우의 수에 해당되지 않을 때 실행
        default:
            //그 외는 F학점
            printf("%d점은 F학점입니다.\n", jumsu);
            break; //위 구문이 실행되는 break
    }

    return 0;

    
    // if (jumsu >= 0 && jumsu < 60)
    //     printf("d%점은 F학점입니다.\n", jumsu);
    // else if (jumsu >= 60 && jumsu <70)
    //     printf("d%점은 D학점입니다.\n", jumsu);
    // else if(jumsu >= 70 && jumsu < 80)
    //     printf("d%점은 C학점입니다.\n", jumsu);
    // else if(jumsu >= 80 && jumsu < 90)
    //     printf("d%점은 B학점입니다.\n", jumsu);
    // else if(jumsu >= 90 && jumsu <= 100)
    //     printf("d%점은 A학점입니다.\n", jumsu);

    // return 0;


}