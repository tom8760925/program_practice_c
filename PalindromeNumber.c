#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPalindrome(int x);
int main(int arge, char *argv[]){
    int n = 121;
    bool p = isPalindrome(n);
    printf("p:%s\n",p?"ture":"false");
    return 0;
}
bool isPalindrome(int x) {
    bool r = false;
    
    if(x <0){
        return r;
    }

    return r;
}
