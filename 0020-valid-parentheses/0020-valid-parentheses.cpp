class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int n=s.size();
        if(n<=1)return false;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                st.push(s[i]);
            else
            {
                if(st.empty())return false;
                char x=st.top();
                st.pop();
                switch(x)
                {
                    case('('):
                        if(s[i]!=')')return false;break;
                    case('{'):
                        if(s[i]!='}')return false;break;
                    case('['):
                        if(s[i]!=']')return false;break;
                }

            }
        }
        return st.empty();
    }
};
