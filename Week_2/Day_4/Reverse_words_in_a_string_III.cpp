class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        int n=s.size();
        while(i<n){
            int start =i;
            while(i<n && s[i]!=' '){
                i++;
            }
            reverse(s.begin()+start,s.begin()+i);
            i++;
        }
        return s;
        
    }
};