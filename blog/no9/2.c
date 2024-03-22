#include <stdio.h>
#include <stdlib.h>
struct a 
{
    int aa;
};
struct b 
{
    struct a aa;
    char bb;
};
void ra(struct a *ar);
void ra2(struct a ar);
struct a ra3(struct a ar);
int main(){
    struct a as ={1};//使用方法1
    struct a *as2=&as;//使用方法1
    struct a as3;//使用方法2
    struct a as4={.aa=4};//使用方法5
    struct b bs={//使用方法6
        .aa={.aa=5},
        .bb='A'
        };
    struct a as5[]={{.aa=1},{.aa=2},{.aa=3},{.aa=4},{.aa=5}};//使用方法7
    struct a *as6 = malloc(sizeof(struct a));//使用方法8
    struct a *as7 = malloc(5*sizeof(struct a));//使用方法9
    printf("使用方法1\n");
    printf("p:%d\n",as2->aa);
    printf("p:%d\n",(*as2).aa);
    printf("使用方法2\n");
    ra(&as3);
    printf("p:%d\n",as3.aa);
    printf("使用方法3\n");
    ra2(as);
    printf("使用方法4\n");
    printf("p:%d\n",ra3(as).aa);
    printf("使用方法5\n");
    printf("p:%d\n",as4.aa);
    printf("使用方法6\n");
    printf("p:%d\n",bs.aa.aa);
    printf("p:%c\n",bs.bb);
    printf("使用方法7\n");
    printf("p:%d\n",as5[2].aa);
    printf("使用方法8\n");
    (*as6).aa=1;
    printf("p:%d\n",(*as6).aa);
    free(as6);
    printf("使用方法9\n");
    as7[3].aa=3;
    printf("p:%d\n",as7[3].aa);
    free(as7);
    return 0;
}
void ra(struct a *ar){//使用方法2
    (*ar).aa=2;
}
void ra2(struct a ar){//使用方法3
    printf("p:%d\n",ar.aa);
}
struct a ra3(struct a ar){//使用方法4
    struct a ar_n;
    ar_n.aa=ar.aa+2;
    return ar_n;
}