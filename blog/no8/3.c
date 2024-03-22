#include <stdio.h>
int main(){
    char a='a',b='b';
    int c[]={1,2,3,4,5};
    printf("p:%d\n",&a);
    printf("p:%d\n",&b);
    printf("p:%c\n",*(&b+1));//下一位的記憶體
    printf("p:%c\n",*(&a-1));//上一位的記憶體
    printf("p:%d\n",c);//陣列第一筆的記憶體位址
    printf("p:%d\n",&c[0]);//第一筆的記憶體位址
    printf("p:%d\n",&c[1]);//第二筆的記憶體位址
    printf("p:%d\n",&c[2]);//第三筆的記憶體位址
    printf("p:%d\n",&c[3]);//第四筆的記憶體位址
    printf("p:%d\n",&c[4]);//第五筆的記憶體位址
    printf("p:%d\n",(&c+1));//陣列下一個的記憶體位址
    printf("p:%d\n",*(&c+1)-c);
    /*用陣列下一個的記憶體位址，減掉陣列第一筆的記憶體位址。
    要加上＊不然會有錯誤錯誤為int (*)[5]' and 'int *' are not pointers to compatible types。*/
    return 0;
}