class Solution {
public:
    int finalValueAfterOperations(vector<string>& temp) {
        int x=0;
        for(int i=0;i<temp.size();i++){
            if(temp[i]=="--X"){
                --x;
            }
            else if(temp[i]=="++X"){
                ++x;
            }
            else if(temp[i]=="X++"){
                x++;
            }
            else{
                x--;;
            }
        }
        return x;
    }
};