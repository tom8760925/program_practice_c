#include <stdio.h>
int test(int n);
int main(){
    int a = 0;
    a = test(1);
    printf("p:%d\n",a);
    return 0;
}
int test(int n){
    return n;
}