#include <string.h>
#include <stdio.h>
int main(){
    char a[50],b[50]="AAA";
    int c=0,d=0;
    c=strlen(a);
    d=strlen(b);
    printf("p:%d\n",c);
    printf("p:%d\n",d);
    return 0;
}