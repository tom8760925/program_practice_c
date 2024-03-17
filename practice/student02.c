#include <stdio.h>//載入指令
#include <stdbool.h>//載入指令
void student_input();//函數宣告
int main(){
    int n=0;//宣告
    while (n != 2)//判斷是否結束迴圈
    {
        printf("輸入1輸入學生資料\n輸入2離開\n請輸入1或2:");//顯示需要輸入的值
        scanf("%d",&n);//輸入的值
        switch (n)//判斷輸入的值
        {
        case 1:
            student_input();//呼叫函數
            break;
        case 2:
            printf("離開\n");//結束迴圈
            break;
        default:
            printf("輸入錯誤\n");//輸入的值錯誤
            break;
        }
    }
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