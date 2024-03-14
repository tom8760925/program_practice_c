#include <stdio.h>
#ifndef NMAX
#define NMAX 3
#endif
struct student
{
    char name[50];
    int no,phore;
};

int main(){
    char *n[NMAX] = {"姓名","學號","電話"};
    struct student st;
    for(int i=0;i<NMAX;i++){
        printf("請輸入%s:",n[i]);
        scanf("%s",st.name);
        printf("%s:%s\n",n[i],st.name);
    }
    return 0;
}