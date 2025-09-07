class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size()!=t.size()) return false;

         unordered_map<char,int>freqs;
         for(char ch : s){
            freqs[ch]++;
         }
            
         unordered_map<char,int>freqt;
         for(char ch : t){
            freqt[ch]++;
         }
         for(int i=0;i<s.size();i++){
            
            if(freqs[s[i]] !=  freqt[s[i]]) return false;
         }
         return true; 

    }
};