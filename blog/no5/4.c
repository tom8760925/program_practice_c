#include <stdio.h>
int main(){
    char n='a';
    switch (n)
    {
    case 'a':
        printf("p:apple\n");
        break;
    case 'b':
        printf("p:banana\n");
        break;
    default:
        printf("p:error\n");
        break;
    }
    return 0;
}