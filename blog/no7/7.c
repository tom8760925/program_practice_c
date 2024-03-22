#include <stdlib.h>
#include <stddef.h>
int main(){
    int *a;
    a = (int *)malloc(10*sizeof(int));//創建10個空值陣列
    int *b;
    b = realloc(a,sizeof(int)*20);//更改陣列大小
    if(b == NULL){//檢查是否為NULL，也可以使用!b等同於b == NULL
        free(b);
    }
    else{
        a=b;
        free(b);
    }
    return 0;
}