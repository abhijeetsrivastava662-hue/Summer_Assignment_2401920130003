class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int ansIndex=0;
        int n = chars.size();

        while(i<n){
            int j=i+1;
            while(j<n && chars[i]==chars[j]){
                j++;
            }
            //yaha kab aa aoge
            //ya toh vector pura traverse kardia ho
            //ya dusra charactar encounter hua ho

            //old character store karlo
            chars[ansIndex++] = chars[i];

            int count= j-i;
            if(count>1){
                //converting counting single digit and storing it in answer
                string cnt = to_string(count);
                for(char ch:cnt){
                    chars[ansIndex++]=ch;
                }
            }
            //moving to different character
            i=j;
        }
        return ansIndex;
        
    }
};