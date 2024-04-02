#include <string.h>
#include <stdio.h>
int main(){
    char a[50],b[50];
    strcpy(a,"AA");
    strcpy(b,a);
    printf("p:%s\n",a);
    printf("p:%s\n",b);
    return 0;
}