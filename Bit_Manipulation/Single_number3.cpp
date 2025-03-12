class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
        int xorr = 0;
        for(int i =0; i<n; i++){
            xorr = xorr^nums[i];
        }

        int j=0;
       
        while(((xorr>>j)&1)== 0){
           
            j++;
        }
       

        int x1 = 0, x2 =0;
        for(int i =0; i<n; i++){
            if((nums[i]>>j)&1 ==1){
              
                x1^=nums[i];
            }else{
             
                x2^=nums[i];
            }
        }
        vector<int>ans(2);
        ans[0]=x1;
        ans[1]=x2;
        return ans;
    }
};
