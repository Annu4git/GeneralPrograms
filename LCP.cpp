class Solution {
public:
    
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)
            return "";
        if(strs.size()==1)
            return strs[0];
        int col=-1;
        int flag = 1;
        while(flag == 1) {
            col++;
            for(int i=1;i<strs.size();i++) {
                if(strs[0][col] != strs[i][col]) {
                    flag = 0;
                }
            }
        }
        return strs[0].substr(0,col);
    }
};
