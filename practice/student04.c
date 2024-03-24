#include <stdio.h>//載入指令
#include <stdbool.h>//載入指令
#include <stdlib.h>//載入指令
#include <ctype.h>//載入指令
#include <string.h>//載入指令
#ifndef  MAX //定義
#define MAX 2
#endif
struct student //結構宣告
{
    char name[50];
    int no,score;
};
void student_input(int n);//資料輸入
int student_score(int n);//總成績
void scanf_flush();//input buffer
struct student struct_student[MAX];//結構變數宣告
int main(){
    char scanf_in[]="";//宣告
    int scanf_number=0;//宣告
    bool bool_n = true;//宣告
    while (bool_n)//判斷是否結束迴圈
    {
        printf("輸入1輸入學生資料(最多輸入%d筆資料，現在已經輸入%d筆)\n輸入2計算總成績\n輸入3離開\n請輸入1、2、3:",(int)MAX,scanf_number);//顯示需要輸入的值
        scanf("%[1-3]s",scanf_in);//輸入的值
        switch (atoi(&scanf_in[0]))//判斷輸入的值
        {
        case 1:
            if(scanf_number<MAX){//判斷輸入筆數
                printf("現在輸入的是第%d筆\n",scanf_number+1);//顯示筆數
                student_input(scanf_number);//呼叫函數
                scanf_number++;//筆數+1
            }
            else{
                printf("現在已經輸入%d筆，結束輸入\n",scanf_number);//超過筆數強制結束
                bool_n=false;
            }
            break;
        case 2:
            if(scanf_number>0){
                printf("總成績:%d\n",student_score(scanf_number));//總成績
            }
            else{
                printf("並未輸入任何成績\n");
            }
            break;
        case 3:
            printf("離開\n");//結束迴圈
            bool_n=false;
            break;
        default:
            printf("輸入錯誤\n");//輸入的值錯誤
            break;
        }
        scanf_flush();//input buffer
    }
    return 0;
}
void student_input(int n){
    char *pr[]={"英文姓名","學號","成績"},*scanf_if[]={"char","int","int"};//宣告
    struct student struct_student_input;//結構變數宣告
    void *scanf_void[]={&struct_student_input.name,&struct_student_input.no,&struct_student_input.score};//宣告記憶體位置
    for(int i=0;i<(int)(sizeof(pr)/sizeof(pr[0]));i++){//跑迴圈
        scanf_flush();//input buffer
        printf("請輸入%s:",pr[i]);//顯示需要輸入的值
        if(strcmp(scanf_if[i],"char")==0)//判斷輸入為字串或數值
        {
            scanf("%s",(char *)scanf_void[i]);//輸入字串
            printf("%s:%s\n",pr[i],(char *)scanf_void[i]);//顯示數入值
        }
        else
        {
            scanf("%d",(int *)scanf_void[i]);//輸入數值
            printf("%s:%d\n",pr[i],*(int *)scanf_void[i]);//顯示數入值
        }
    }
    struct_student[n]=struct_student_input;//輸入資料
}
int student_score(int n){
    int return_score=0;//宣告
    for(int i=0;i<n;i++){//回圈
        return_score+=struct_student[n-1].score;//計算總和
    }
    return return_score;
}
void scanf_flush(){
    while ( (getchar()) != '\n' );
}