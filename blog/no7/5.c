#include <stdlib.h>
int main(){
    char a[50][50];//創建大小為50*50陣列
    char b[50][50]={"AAA","BBB"};//創建大小為50*50陣列，並輸入值
    char *c[2]={"AAA","BBB"};//依照輸入值的大小創建陣列
    char *d[]={"AAA","BBB"};//依照輸入值的大小創建陣列
    char **e = (char **)malloc(10*sizeof(char));//創建10*10個空值陣列
    for(int n = 0;n<10;n++){
        e[n] = (char *)malloc(10*sizeof(char));
    }
    char (*f)[10][10] = malloc(sizeof(*f));//創建10*10個空值陣列
    char (*g)[10] = malloc(10*sizeof(*g));//創建10*10個空值陣列
    char **h = (char **)calloc(10,sizeof(char));//創建10*10個為0的陣列
    for(int n = 0;n<10;n++){
        h[n] = (char *)calloc(10,sizeof(char));
    }
    return 0;
}