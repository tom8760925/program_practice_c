#include <stdio.h>
int main(){
    int a[]={1,5,10,15};
    printf("p:%d\n",*a);
    printf("p:%d\n",a[0]);
    printf("p:%d\n",*(a+1));//a[1]
    return 0;
}