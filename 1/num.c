#include <stdio.h>

void main(void){

    int num = 0;
    int odd_total_num = 0;
    int even_total_num = 0;

    printf("202434-363701 �������Դϴ�!\n");
    printf("-----------------------------\n");
    printf("1~100���� ���ڸ� �Է� �ϼ��� : \n");
    scanf("%d", &num);

    //num�� 100�����̸�~.
    if (num<=100){
        //num�� 1���� ũ�� ����.
        while (num>=1){
            //Ȧ���϶�/�������� 1�϶�
            if (num%2 == 1)
            {
                //Ȧ���� ���Ѵ�
                odd_total_num += num;

            } 
            //¦���϶�/�������� 0�϶�
            else if(num%2 ==0){
                //¦���� ���Ѵ�
                even_total_num += num;
            }
            //num�� 1�� ���� �ٽ� ���α׷� ����. 0�� �� ����.
            num--;
        } 
        printf("Ȧ�� ���� �� �հ� : %d \n", odd_total_num);
        printf("¦�� ���� �� �հ� : %d \n", even_total_num);

    } else {
        //���� ������ �ƴϸ� else�� ����
        printf("�Է� ���� 100�� �ѽ��ϴ�\n");
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
    //     printf("Ȧ�� ���� �� �հ� : %d \n", odd_total_num);
    //     printf("¦�� ���� �� �հ� : %d \n", even_total_num);

    // } else {
    //     printf("�Է� ���� 100�� �ѽ��ϴ�\n");
    // }
}