#include <stdlib.h>
int main(){
    int *a = (int *)malloc(10*sizeof(int));//創建10個空值陣列
    free(a);//釋放記憶體
    return 0;
}