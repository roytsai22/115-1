#include <stdio.h>
int main()  
{
    int drinks;   
    printf("請選擇飲料\n1. 紅茶 30元\n2. 綠茶 35元\n3. 奶茶 50元\n4. 果汁 45元\n你選擇為:" );
    scanf("%d",&drinks); 
    switch(drinks)
    {
        case 1:
        printf("1.紅茶 30元");
        break;
        case 2:
        printf("2.綠茶 35元");
        break;
        case 3:
        printf("3.奶茶 50元");
        break;
        case 4:
        printf("4.果汁 45元");
        break;
        default:
        printf("無此飲料選項");
    } 
    return 0;                                   
}