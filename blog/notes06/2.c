#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
    char *a,b[]="AA";
    a=strdup(b);
    printf("p:%s\n",a);
    printf("p:%s\n",b);
    free(a);
    return 0;
}