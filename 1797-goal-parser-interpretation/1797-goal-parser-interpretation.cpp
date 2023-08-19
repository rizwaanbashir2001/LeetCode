class Solution {
public:
    string interpret(string str) {
        string str1;
        string bkl;
        for(int i=0;i<str.size();i++){
            bkl.push_back(str[i]);
            if(str[i]=='G'){
                str1.push_back('G');
                bkl.clear();
            }
            if(bkl=="()"){
                bkl.clear();
                str1.push_back('o');
            }
            if(bkl=="(al)"){
                bkl.clear();
                str1.push_back('a');
                str1.push_back('l');
            }
        }
        return str1;
    }
};