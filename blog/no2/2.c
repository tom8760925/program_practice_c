#include <stdio.h>
int main(){
    int a = 11;
    void *p;
    p = &a;
    printf("p:%p\n",&a);
    printf("p:%p\n",p);
    printf("p:%p\n",&p);
    return 0;
}
