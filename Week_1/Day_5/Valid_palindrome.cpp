class Solution {
    private:
    bool valid(char ch){
        if( (ch>='A'&&ch<='Z') || (ch>='a'&&ch<='z') || (ch>='0'&&ch<='9') )
        return 1;
        else{
            return 0;
        }
    }
    char toLowerCase(char ch){
        if((ch>='a'&&ch<='z') || (ch>='0'&&ch<='9'))
        return ch;
        else{
            char temp= ch-'A'+'a';
            return temp;
        }
    }
    bool checkPalindrome(string s) {
       
        int start=0,end=s.size()-1;
        while(start<=end){
           if(s[start]==s[end]){
            start++;
            end--;
           }else{
             return 0;
           }
         }
         return 1;
       
    }
public:
   bool isPalindrome(string s) {
        // faltu character hatado
        string temp="";

        for(int j=0;j<s.length();j++){
            if(valid(s[j])){
                temp.push_back(s[j]);
            }
        }
        //lower case me kardo
        for(int j=0;j<temp.length();j++){
            temp[j]=toLowerCase(temp[j]);
        }

        return checkPalindrome(temp);

       
    }
};