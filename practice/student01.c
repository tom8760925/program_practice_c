#include <stdio.h>//載入指令
void student_input();//函數宣告
int main(){
    student_input();//呼叫函數
    return 0;
}
void student_input(){
    char name[]="";
    int no=0,phone=0;
    printf("請輸入姓名:");//顯示需要輸入的值
    scanf("%s",name);//輸入的值
    printf("姓名:%s\n",name);//顯示輸入的值
    printf("請輸入學號:");//顯示需要輸入的值
    scanf("%d",&no);//輸入的值
    printf("學號:%d\n",no);//顯示輸入的值
    printf("請輸入電話:");//顯示需要輸入的值
    scanf("%d",&phone);//輸入的值
    printf("電話:%d\n",phone);//顯示輸入的值
}