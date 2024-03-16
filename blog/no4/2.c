#include <stdio.h>
int main(){
    printf("十進位:%d\n",16);
    printf("十進制無符號:%u\n",16);
    printf("十進位浮點數:%f\n",16.16);
    printf("八進位:%o\n",16);
    printf("十六進位:%x\n",16);
    printf("十六進位浮點數:%a\n",16.16);
    printf("指數:%e\n",16.16);
    printf("判斷使用%%f和%%e，哪個以較短較精簡能夠輸出:%g\n",16.16);
    printf("單一字元:%c\n",'A');
    printf("字串:%s\n","AA");
    char a[] = "AA";
    printf("記憶體位置:%p\n",a);
    printf("專門是unsigned long:%lu\n",(unsigned long)16);
    printf("專門是unsigned long long:%llu\n",(unsigned long long)16);
    printf("%%:%%A\n");
    return 0;
}