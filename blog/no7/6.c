#include <stddef.h>
int main(){
    int a[]={1,2,3,4,5};
    size_t sa = sizeof(a)/sizeof(int);
    int ia = sizeof(a)/sizeof(int);
    size_t sa2 = sizeof(a)/sizeof(a[0]);
    int ia2 = sizeof(a)/sizeof(a[0]);
    int length = *(&a + 1) - a;
    return 0;
}