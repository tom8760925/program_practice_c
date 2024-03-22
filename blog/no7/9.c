#include <stdio.h>
int main(){
    char *a[2]={"apple","banana"};
    printf("p:%s\n",a[0]);
    printf("p:%s\n",a[1]);
    printf("p:%c\n",a[0][0]);
    printf("p:%c\n",a[1][0]);
    printf("p:%s\n",*a);//a[0]
    printf("p:%s\n",*(a+1));//a[1]
    printf("p:%c\n",*a[0]);//a[0][0]
    printf("p:%c\n",**a);//a[0][0]
    printf("p:%c\n",*a[1]);//a[1][0]
    printf("p:%c\n",**(a+1));//[1]][0]
    printf("提取第三個字p和n\n");
    printf("p:%c\n",a[0][2]);
    printf("p:%c\n",a[1][2]);
    printf("p:%c\n",*(*a+2));//a[0][2]
    printf("p:%c\n",*(*(a+1)+2));//a[1][2]
    return 0;
}