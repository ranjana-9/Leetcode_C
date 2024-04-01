/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize) {
    int *ans=(int *)malloc(numsSize*sizeof(int));
    int i=0;
    while(i<numsSize){
        ans[i]=nums[nums[i]];
        i++;
    }
    *returnSize = numsSize;
    return ans;
}
