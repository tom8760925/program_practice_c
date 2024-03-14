#include <stdio.h>
int test(int n);
int main(int arge, char *argv[]){
    int a = 0;
    a = test(0);
    printf("p:%d\n",a);
    return 0;
}
int test(int n){
    n++;
    if(n == 5){
        return n;
    }
    else{
        return test(n);
    }
}