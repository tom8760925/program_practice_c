#include <stdio.h>//載入指令
#include <stdbool.h>//載入指令
#ifndef  MAX //定義
#define MAX 2
#endif
struct student //結構宣告
{
    char name[50];
    int no,phone;
};
struct student student_input();//函數宣告
struct student prin[MAX];//結構變數宣告
int main(){
    int n=0,stin=0;//宣告
    
    while (n != 2)//判斷是否結束迴圈
    {
        printf("輸入1輸入學生資料(最多輸入%d筆資料)\n輸入2離開\n請輸入1或2:",(int)MAX);//顯示需要輸入的值
        scanf("%d",&n);//輸入的值
        switch (n)//判斷輸入的值
        {
        case 1:
            if(stin<MAX){//判斷輸入筆數
                printf("現在輸入的是第%d筆\n",stin+1);//結束迴圈
                prin[stin] = student_input();//呼叫函數
                stin++;//筆數+1
            }
            else{
                printf("現在已經輸入%d筆，結束輸入\n",stin);//超過筆數強制結束
                n=2;
            }
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
struct student student_input(){
    struct student prf;//結構變數宣告
    char *pr[]={"姓名","學號","電話"};//宣告
    printf("請輸入%s:",pr[0]);//顯示需要輸入的值
    scanf("%s",prf.name);//輸入的值
    printf("%s:%s\n",pr[0],prf.name);//顯示輸入的值
    printf("請輸入%s:",pr[1]);//顯示需要輸入的值
    scanf("%d",&prf.no);//輸入的值
    printf("%s:%d\n",pr[1],prf.no);//顯示輸入的值
    printf("請輸入%s:",pr[2]);//顯示需要輸入的值
    scanf("%d",&prf.phone);//輸入的值
    printf("%s:%d\n",pr[2],prf.phone);//顯示輸入的值
    return prf;
}