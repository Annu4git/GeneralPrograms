class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n==0)
            return 0;
        vector<int> left(n), right(n);
        int maxx = height[0];
        for(int i=1;i<n;i++) {
            maxx = max(maxx, height[i]);
            left[i] = maxx;
        }
        maxx = height[n-1];
        for(int i=n-2;i>=0;i--) {
            maxx = max(maxx, height[i]);
            right[i] = maxx;
        }
        int ans = 0;
        for(int i=1;i<n-1;i++) {
            ans += min(left[i], right[i]) - height[i];
        }
        return ans;
    }
};
