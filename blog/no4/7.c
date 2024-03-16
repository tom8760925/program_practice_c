#include <stdio.h>
int main(){
    char a[50];
    getchar();//輸入字元並只傳出一個字元
    fgets(a,sizeof(a),stdin);//輸入字串
    putchar('A');//只能輸出字char
    putchar(65);//會轉換ASCII得到Ａ
    puts("AAA");//輸出字串
    return 0;
}