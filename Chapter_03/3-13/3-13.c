//�Դ����嵥3-17�еĳ�������޸ģ���ʹ��if��䣬����ʹ��switch�����ʵ�֡�
#include <stdio.h>
int main(void)
{
    int month;

    printf("�������·ݣ�");
    scanf("%d", &month);

    switch (month)
    {
    case 3:
    case 4:
    case 5:
        puts("���졣");
        break;
    case 6:
    case 7:
    case 8:
        puts("���졣");
        break;
    case 9:
    case 10:
    case 11:
        puts("���졣");
        break;
    case 12:
    case 1:
    case 2:
        puts("���졣");
        break;
    default:
        puts("������·ݲ���ȷ��");
        break;
    }
    return 0;
}