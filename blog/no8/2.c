#include <stdio.h>
int main(){
    int **a,*b,c=1;//儲存數值的記憶體位址
    char **d,*e,f='A';//儲存字串的記憶體位址
    void **g,*h;//儲存任意的記憶體位址
    //int
    b=&c;//b儲存c記憶體位址
    printf("p:%d\n",*b);
    a=&b;//a儲存b記憶體位址
    printf("p:%d\n",**a);
    //char
    e=&f;//e儲存f記憶體位址
    printf("p:%c\n",*e);
    d=&e;//d儲存e記憶體位址
    printf("p:%c\n",**d);
    //void
    h=&c;//h儲存c記憶體位址
    g=&h;//g儲存h記憶體位址
    h=&f;//h儲存f記憶體位址
    g=&h;//g儲存h記憶體位址
    return 0;
}