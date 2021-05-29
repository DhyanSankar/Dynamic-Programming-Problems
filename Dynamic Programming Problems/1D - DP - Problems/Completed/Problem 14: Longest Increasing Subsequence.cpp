class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int N=nums.size();
        int one, two, three, four;
        
        one=0;
        for(int i=0; i<N; ++i)
        {
            two=0; three=one;
            while(two<three)
            {
                four=(two+three)>>1;
                if(nums[four]<nums[i]) two=four+1;
                else three=four;
            }
            
            if(two==one)
            {
                nums[two]=nums[i];
                one++;
            }else
                nums[two]=min(nums[two], nums[i]);
        }
        return one;
    }
};