class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";

        for(auto s : strs){
            result += to_string(s.size()) + "#" + s;
        }

        return result;
    }

    vector<string> decode(string s) {

        int n = s.size();
        int i = 0;
        vector<string> ans;

        while(i < n){

            int j = i;

            while(s[j] != '#'){
                j++;
            }

            int length = stoi(s.substr(i, j - i));
            string word = s.substr(j + 1, length);
            ans.push_back(word);
            i = j + 1 + length;
        }

        return ans;
    }
};
