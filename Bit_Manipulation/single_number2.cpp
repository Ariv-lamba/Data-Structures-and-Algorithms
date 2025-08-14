
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int i =0; i<32; i++){
            int sum = 0;
            for(int j =0; j<nums.size(); j++){
                int x = nums[j]>>i;
                x = x&1;
                if(x==1){
                    sum++;
                    sum = sum%3;
                }
            }
            sum= sum<<i;
            if(sum !=0){
                ans = ans|sum;
            }
        }
        return ans;
    }
};
