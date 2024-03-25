

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int *ans=(int *)malloc(numsSize* sizeof(int));
    int i=0,j=0;
    for(i=0;i<numsSize;i+=2,j++){
        ans[i]=nums[j];
        ans[i+1]=nums[n+j];
    }
    *returnSize=i;
    return ans;
}
