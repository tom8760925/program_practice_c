#include <stdio.h>
struct a //第一種
{
    int aa;
};
typedef struct a b;
int main(){
    b c;
    c.aa=1;
    printf("p:%d\n",c.aa);
    return 0;
}