class Solution{
    public:
    int solve(vector<int> &A, int B) {
        unordered_map<int,int> mp;
        int xorr = 0, cnt = 0;
        for(auto it : A) {
            xorr = xorr ^ it;
            if(xorr == B) {
                cnt++;
            }
            int num = xorr ^ B;
            if(mp.find(num) != mp.end()) {
                cnt += mp[num];
            }
            mp[xorr]++;
        }
        return cnt;
    }
};
