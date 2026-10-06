#include <stdio.h>
int main()
{
    int 學生權限=5;
    int 停車場門禁=1<<2;
    int 辦公室場門禁=1<<3;
    printf("停車場的權限%d\n",停車場門禁);
    printf("學生有無停車場權限%d\n",學生權限&停車場門禁);
    printf("學生有無老師辦公室權限%d\n",學生權限&辦公室場門禁);
    return 0;
}