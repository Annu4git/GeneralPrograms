class Solution {
public:
    
    vector<string> create(string digits, int index, vector<string> &v) {
        vector<string> next;
        vector<string> ans;
        if(index == digits.size()) {
            return next;
        }
        next = create(digits, index+1, v);
        cout << "index : " << index << endl;
        string current = v[digits[index] - '0' - 2];
        cout << "current : " << current << endl;
        for(int i=0;i<current.size();i++) {
            string s  = "";
            s = s + current[i];
            if(next.size() == 0)
                ans.push_back(s);
            else {
                for(int j=0;j<next.size();j++) {
                    ans.push_back(s + next[j]);
                    
                }   
            }
        }
        return ans;
    }
    
    vector<string> letterCombinations(string digits) {
        vector<string> v(8, "");
        v[0] = "abc";
        v[1] = "def";
        v[2] = "ghi";
        v[3] = "jkl";
        v[4] = "mno";
        v[5] = "pqrs";
        v[6] = "tuv";
        v[7] = "wxyz";
        return create(digits, 0, v);
    }
};
