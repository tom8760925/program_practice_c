#include <stdio.h>
int main(){
    int a = 0;
    unsigned int e = 0;
    float b = 0;
    double f = 0;
    char c = 'A';
    char d[] = "";
    void *g = NULL;
    scanf("%d",&a);//十進位
    scanf("%u",&e);//十進制無符號
    scanf("%f",&b);//十進位浮點數
    scanf("%lf",&f);//十進位浮點數
    scanf("%o",&a);//八進位
    scanf("%x",&a);//十六進位
    scanf("%i",&a);//十進位八進位十六進位
    scanf("%a",&b);//浮點數
    scanf("%e",&b);//指數
    scanf("%g",&b);//判斷使用%%f和%%e，哪個比較短較精簡
    scanf("%c",&c);//單一字元
    scanf("%s",d);//字串
    scanf("%p",&g);//記憶體位置
    return 0;
}