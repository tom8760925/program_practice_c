#include <stdlib.h>
int main(){
    int a[10][10];//創建大小為50陣列
    int b[10][10]={{1,2},{3,4},{5,6},{7,8}};//創建大小為10*10陣列，並輸入值
    int **e = (int **)malloc(10*sizeof(int));//創建10*10個空值陣列
    for(int n = 0;n<10;n++){
        e[n] = (int *)malloc(10*sizeof(int));
    }
    int (*f)[10][10] = malloc(sizeof(*f));//創建10*10個空值陣列
    int (*g)[10] = malloc(10*sizeof(*g));//創建10*10個空值陣列
    int **h = (int **)calloc(10,sizeof(int));//創建10*10個為0的陣列
    for(int n = 0;n<10;n++){
        h[n] = (int *)calloc(10,sizeof(int));
    }
    return 0;
}