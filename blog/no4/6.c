#include <stdio.h>
int main(){
    char a[] = "",b[3],c,d;
    scanf("%[1-5]",a);
    //設定輸入範圍，這樣設定會限制只能輸入1到5，輸入136只接收13，但輸入1363只接收13
    scanf("%[^1-5]",a);
    //加上^，改為排除
    scanf("%2s",b);//限制輸入字元
    scanf("%c-%c",c,d);
    //輸入多個值，需要設定字元中間的區隔，這裡使用-在輸入值時需要依照設定區隔，沒有設定也會自動區隔。
    return 0;
}