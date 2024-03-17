#include <stdio.h>
int main(){
    int a=1,b=2;
    if(a<b){
        printf("p:%d<%d\n",a,b);
    }
    else if(a>b)
    {
        printf("p:%d>%d\n",a,b);
    }
    else{
        printf("p:%d=%d\n",a,b);
    }
    return 0;
}