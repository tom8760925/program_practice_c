#include <stdio.h>
void test1();
void test2();
int main(){
    printf("test1\n");
    test1();
    printf("test2\n");
    test2();
    return 0;
}
void test1(){
    int a=0;
    char b[]="";
    printf("a:%d\n",&a);
    printf("b:%d\n",&b);
    printf("p:%d\n",a);
    scanf("%s",b);
    printf("p:%d\n",a);
    scanf("%s",b);
    printf("p:%d\n",a);
}
void test2(){
    char b[]="";
    int a=0;
    printf("b:%d\n",&b);
    printf("a:%d\n",&a);
    printf("p:%d\n",a);
    scanf("%s",b);
    printf("p:%d\n",a);
    scanf("%s",b);
    printf("p:%d\n",a);
}
