class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string first = strs[0];
        for(int i = 0; i<first.size(); i++){
            for(int j = 1; j<n; j++){
               if(i >= strs[j].size() || strs[j][i] != first[i]){
                    return first.substr(0, i);
                }
            }
        }
        return first;
    }
};