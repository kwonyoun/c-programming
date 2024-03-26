#include <stdio.h>

int main(void){
    int jumsu;

    printf("0에서 100점수 사이의 점수를 입려하세요\n");
    scanf("%d", &jumsu);

    if (jumsu >= 0 && jumsu < 60)
        printf("d%점은 F학점입니다.\n", jumsu);
    else if (jumsu >= 60 && jumsu <70)
        printf("d%점은 D학점입니다.\n", jumsu);
    else if(jumsu >= 70 && jumsu < 80)
        printf("d%점은 C학점입니다.\n", jumsu);
    else if(jumsu >= 80 && jumsu < 90)
        printf("d%점은 B학점입니다.\n", jumsu);
    else if(jumsu >= 90 && jumsu <= 100)
        printf("d%점은 A학점입니다.\n", jumsu);

    return 0;
}