class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int ans = 0;
        for(auto num : prices)
        {
            mini = min(mini,num);
            if(num > mini)
            {
                ans = max(ans,num - mini);
            }
        }
        return ans;
    }
};
