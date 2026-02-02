/*
 * Problem: 268. Missing Number
 * Link: https://leetcode.com/problems/missing-number/
 */
int missingNumber(int* nums, int numsSize) {
    int x=0;
    for(int i=1;i<=numsSize;i++){
        x=x^i^nums[i-1];
    }
    return x;
}
