#include <stdio.h>
int main()  
{
      int password; 
      printf("請使用者輸入密碼(輸入-1退出):");
      scanf("%d",&password);
    while (password !=-1 && password !=1234)
    {
         printf("請使用者輸入密碼(輸入-1退出):");
         scanf("%d",&password);
    }
    if (password==1234)
        {
            printf("登入成功");
        }
        else
        {
            printf("密碼錯誤");
        }
        return 0;





}
    

    