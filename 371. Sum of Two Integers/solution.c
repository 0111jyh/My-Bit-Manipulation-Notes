/*
 * Problem: 371. Sum of Two Integers
 * Link: https://leetcode.com/problems/sum-of-two-integers/
 */
int getSum(int a, int b) {
    unsigned int carry;
    //對 signed integer 做 left shift，
    //如果結果無法表示在該型別中 → Undefined Behavior
    //if(a==0) return b;
    //if(b==0) return a;
    while(b!=0){
        carry = ((unsigned int)(a & b)) << 1;
        a=a^b;
        b=carry;
    }
        return a;
}
