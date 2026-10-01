class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int carry =1;
       int N =digits.size();
       for(int i=N-1;i>=0;i--){
            int now =digits[i]+carry;
            carry = now /10;
            digits[i] = now %10;
       }
       if (carry>0)digits.insert(digits.begin(),carry);
       return digits;
    }
};
