/*
 * Problem: 201. Bitwise AND of Numbers Range
 * Link: https://leetcode.com/problems/bitwise-and-of-numbers-range/
 */
int rangeBitwiseAnd(int left, int right) {
    int cnt=0;
    if(left==right)
        return left;
    while(left!=right){
        left>>=1;
        right>>=1;
        cnt++;
    }
    return left<<cnt;
}
