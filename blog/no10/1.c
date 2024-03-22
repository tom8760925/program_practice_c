#include <stdio.h>
#define MAX 2

#ifndef  MAX//如果同樣定義，就不執行
#define MAX 3
#endif

#ifdef  MAX//如果同樣定義，就執行
#define NMAX 1
#endif

#if (NMAX==1)//判斷
#define IFMAX 3
#elif (NMAX==2)
#define IFMAX 2
#else
#define IFMAX 1
#endif

#if defined(NMAX)//判斷是有定義
#define IFDMAX 4
#endif

int main(){
    printf("p:%d\n",MAX);
    printf("p:%d\n",NMAX);
    printf("p:%d\n",IFMAX);
    printf("p:%d\n",IFDMAX);
    return 0;
}