//week05-2.cpp學習計畫
class Solution {
public:
    string toLowerCase(string s) {
     //week02 教過字串 s 的長度 .length()
     for (int i=0;i < s.length();i++){
        if(isupper(s[i]))s[i] = s[i] - 'A'+'a';
     }//s[0]='h';
     return s;
    }
};
