#include <stdlib.h>
int main(){
    char a[50];//創建大小為50陣列
    char b[50]="AAA";//創建大小為50陣列，並輸入值
    char c[]="AAA";//依照輸入值的大小創建陣列
    char d[]="";//創建依照輸入值的大小創建的陣列
    char *e = (char *)malloc(10*sizeof(char));//創建10個空值陣列
    char *f = (char *)calloc(10,sizeof(char));//創建10個為空的陣列
    char g[] = {[0] = 'A',[1] = 'B',[2] = 'C',[3] = 'D',[4] = 'E'};//指定收尋值
    return 0;
}