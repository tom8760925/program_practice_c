#include <stdio.h>
#ifndef NMAX //設定最大值
#define NMAX 3
#endif
struct student 
{
    char name[50]; //姓名
    int no,phore; //學號、電話
};
int main(){
    char *n[NMAX] = {"姓名","學號","電話"}; //設定初值
    struct student st; //呼叫student
    for(int i=0;i<NMAX;i++){//跑設定的次數
        printf("請輸入%s:",n[i]);//顯示需要輸入的值
        scanf("%s",st.name);//輸入的值
        printf("%s:%s\n",n[i],st.name);//顯示輸入的值
    }
    return 0;
}