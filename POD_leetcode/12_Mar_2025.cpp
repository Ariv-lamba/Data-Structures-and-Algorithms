class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int count = 0;
        int count2 = 0;
        for(int i =0; i<nums.size(); i++){
            if(nums[i]<0)count++;
            if(nums[i]>0)count2++;
        }
        return (count>count2)?count:count2;
    }
};
