#include <stdio.h>
int main()
{ 
    int 客廳=9;
    int 臥室=5;
    int 廚房=2;
    int 現在=13;
    printf("目前客廳設備:%d\n",客廳&現在);
    printf("目前臥室設備:%d\n",臥室&現在);
    printf("目前廚房設備:%d\n",廚房&現在);
    printf("廚房切換後目前設備狀態:%d\n",廚房^現在);
    return 0; 
}