class Solution {
public:
    bool isAnagram(string s, string t) {
        int m = s.size();
        int n = t.size();
        if(m != n)
        return false;
        vector<int>freq(52);
        for(char ch : s){
            if(ch >= 'a' || ch <= 'z'){
                freq[ch - 'a']++;
            }
            else if(ch >= 'A' || ch <= 'Z'){
                freq[ch - 'A' + 26]++;
            }
        }
        for(char ch : t){
              if(ch >= 'a' && ch <= 'z'){
                freq[ch - 'a']--;
            }
            else if(ch >= 'A' && ch <= 'Z'){
                freq[ch - 'A' + 26]--;
            }
        }
        for(int i = 0; i<52; i++){
            if(freq[i] != 0){
                return false;
            }
        }
        return true;
        
    }
};
