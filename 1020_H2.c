#include <stdio.h>
int main()
{
    int money;
    int total=0;
    do
    {
     printf("請輸提款金額(輸入0退出):");
     scanf("%d",&money);
     total+=money;
    } while (money !=0);
    printf ("提款總金額:%d",total);

    return 0;
    
}