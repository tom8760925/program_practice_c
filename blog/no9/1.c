#include <stdio.h>
struct a //第一種
{
    int aa;
};
struct b //第二種
{
    char bb;
} bs;//直接宣告結構變數名稱
int main(){
    struct c//第三種
    {
        int *cc;
    };
    struct d//第四種
    {
        char *dd;
    } ds;
    struct e //第五種
    {
        char ee,ef[3];
    } es={'b',{'c','d'}};//宣告結構變數和設定初值
    struct a as ={1};//宣告結構變數和設定初值
    struct c cs;//宣告結構變數
    bs.bb='a';//設定值
    cs.cc=&as.aa;//設定值
    ds.dd=&bs.bb;//設定值
    printf("p:%d\n",as.aa);
    printf("p:%c\n",bs.bb);
    printf("p:%d\n",*cs.cc);
    printf("p:%c\n",*ds.dd);
    printf("p:%c\n",es.ee);
    printf("p:%c\n",es.ef[0]);
    return 0;
}