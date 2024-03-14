#include <stdio.h>
int main(int arge, char *argv[]){
    int a=0,b=0;
    char d='+',e='a';
    for(int i=0;i<2;i++){
        printf("hww:");
        scanf("%d",&a);
        b+=a;
    }
    printf("hww sun: %d\n",b);
    printf("int:%lu\n",sizeof(a));
    printf("int:%c\n",e);
    return 0;
}