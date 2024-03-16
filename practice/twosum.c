#include <stdio.h>
#include <stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize);//宣告程式
int main(){
    int ts_nums[5] = {10,2,7,11,15};//輸入陣列
    int ts_numsSize=5/*陣列大小*/ ,ts_target=9/*何的直*/,ts_returnSize=2/*回傳的陣列大小*/;
    int *ts = NULL;//回傳的陣列
    ts = twoSum(ts_nums,ts_numsSize,ts_target,&ts_returnSize);//得到回傳陣列
    if(ts!=NULL){
        printf("r:%d、%d\n",ts[0],ts[1]);//顯示出來
    }
    else{
        printf("r:null\n");//顯示出來
    }
    free(ts);
    ts = NULL;
    return 0;
}
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *r = (int *)malloc(*returnSize*sizeof(int));//回傳的陣列
    for(int n=0;n<numsSize-1;n++){//第一個判斷直
        for(int n1=1;n1<numsSize;n1++){//第二個判斷直
            if(nums[n]+nums[n1]==target){//判斷合是否等於目標值
                r[0]=nums[n];//回傳第一個直
                r[1]=nums[n1];//回傳第二個直
                return r;//回傳直
            }
        }           
    }
    return r;//回傳直
}
