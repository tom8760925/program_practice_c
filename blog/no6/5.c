#include <stdio.h>
int main(){
    for(int n = 0;n<5;n++)
    {
        if(n == 2){
            break;
        }
        printf("p:%d\n",n);
    }
    return 0;
}