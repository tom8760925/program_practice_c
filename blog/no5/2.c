#include <stdio.h>
#include <stdbool.h>
int main(){
    bool p = false;
    p = (2>1)?true:false;
    printf("p:%s\n",p?"true":"fales");
    return 0;
}