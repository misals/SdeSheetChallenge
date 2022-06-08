class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vec(2);
        map<int,int> mp;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            if(mp.find(target - nums[i]) != mp.end())
            {
                vec[0] = mp[target-nums[i]];
                vec[1] = i;
                break;
            }
            else
            {
                mp[nums[i]] = i;
            }
        }
        return vec;
    }
};
