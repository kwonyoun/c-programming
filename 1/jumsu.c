#include <stdio.h>

int main(void){

    int jumsu;
    
    printf("202434-363701 �������Դϴ�!\n");
    printf("-----------------------------\n");
    printf("0���� 100���� ������ ������ �Է��ϼ���\n");
    scanf("%d", &jumsu);

    /**
     * switch-case��
     * */

    //���� ����� ���� 10������ �з���.
    switch (jumsu/10){

        //jumsu�� 10 or 9�϶� ����
        case 10:
        case 9:
            // 90~100���� A����
            printf("%d���� A�����Դϴ�.\n", jumsu); 
            break; //�� ������ ����Ǵ� break

        //jumsu�� 8�϶� ����
        case 8:
            // 80~90���� B����
            printf("%d���� B�����Դϴ�.\n", jumsu);
            break; //�� ������ ����Ǵ� break


        //jumsu�� 7�϶� ����
        case 7:
            //70~80���� C����
            printf("%d���� C�����Դϴ�.\n", jumsu);
            break; //�� ������ ����Ǵ� break


        //jumsu�� 6�϶� ����
        case 6:
            //60~70���� D����
            printf("%d���� D�����Դϴ�.\n", jumsu);
            break; //�� ������ ����Ǵ� break


        //jumsu�� �� ����� ���� �ش���� ���� �� ����
        default:
            //�� �ܴ� F����
            printf("%d���� F�����Դϴ�.\n", jumsu);
            break; //�� ������ ����Ǵ� break
    }

    return 0;

    
    // if (jumsu >= 0 && jumsu < 60)
    //     printf("d%���� F�����Դϴ�.\n", jumsu);
    // else if (jumsu >= 60 && jumsu <70)
    //     printf("d%���� D�����Դϴ�.\n", jumsu);
    // else if(jumsu >= 70 && jumsu < 80)
    //     printf("d%���� C�����Դϴ�.\n", jumsu);
    // else if(jumsu >= 80 && jumsu < 90)
    //     printf("d%���� B�����Դϴ�.\n", jumsu);
    // else if(jumsu >= 90 && jumsu <= 100)
    //     printf("d%���� A�����Դϴ�.\n", jumsu);

    // return 0;


}