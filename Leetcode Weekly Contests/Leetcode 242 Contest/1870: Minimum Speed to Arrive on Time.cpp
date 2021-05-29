//https://leetcode.com/problems/minimum-speed-to-arrive-on-time/
class Solution {
public:
    bool reach(vector<int>& nums, int speed, double time) {
        double sum = 0;
        for(int i = 0; i + 1 < nums.size(); i++) {
            sum += nums[i] / speed + (nums[i] % speed != 0);
        }
        return sum + nums.back() / (double)speed <= time;
    }
    
    int minSpeedOnTime(vector<int>& dist, double hour) {
        if (hour - (double)dist.size() + 1.0 <= 0) {
            return -1;
        }
        int beggining = 1, end = 1e7;
        while (beggining < end) {
            int middle = beggining + (end - beggining) / 2;
            if (reach(dist, middle, hour)) {
                end = middle;
            } else {
                beggining = middle + 1;
            }
        }
        return beggining;
    }
};