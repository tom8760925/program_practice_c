#include <stdlib.h>
int main(){
    int a[50];//創建大小為50陣列
    int b[50]={1,2,3,4};//創建大小為50陣列，並輸入值
    int c[]={1,2,3,4};//依照輸入值的大小創建陣列
    int d[]={};//創建依照輸入值的大小創建的陣列
    int *e = (int *)malloc(10*sizeof(int));//創建10個空值陣列
    int *f = (int *)calloc(10,sizeof(int));//創建10個為0的陣列
    int g[] = {[0] = 1,[1] = 2,[2] = 3,[3] = 4,[4] = 5};//指定收尋值
    return 0;
}