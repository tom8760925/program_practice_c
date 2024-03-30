#include <stdio.h>
int test1(int *a,int *b,int *restrict c);
int main(){
    int a = 1;
    int b = 2;
    int c = 3;
    printf("p:%d\n",test1(&a,&b,&c));
    return 0;
}
int test1(int *a,int *b,int *restrict c){
    *a += *c;
    *b += *c;
    return *a + *b;
}