class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int length = nums.size();
        int maxproduct = -1000;
        for(int i = 0; i < length; i++){
            int total = nums[i];
            if(total > maxproduct){
                maxproduct = total;
            }
            for(int j = i + 1; j < length; j++){
                total = total * nums[j];
                if(total > maxproduct){
                    maxproduct = total;
                }
            }
        }
        return maxproduct;
    }
};