///Md.soharub hossen
///Daffodil international university

#include<bits/stdc++.h>
using namespace std;
map<char,int>p;

int main()
{
    int n;
    p['^']=3;
    p['*']=2;
    p['/']=2;
    p['+']=1;
    p['-']=1;
    p['(']=0;
    p[')']=0;
    scanf("%d\n",&n);
    while(n--)
    {
        string s;
        char temp[3];
        while(gets(temp))
        {
            if(temp[0]=='\0')break;
            s+=temp[0];
        }
        stack<char>st;
        string postfix;
        int ln=s.size();

        for(int i=0; i<ln; i++)
        {
            if(isdigit(s[i]) || isalpha(s[i]))
            {
                postfix+=s[i];
                continue;
            }
            if(!st.size())st.push(s[i]);
            else
            {
                char x=st.top();
                if(s[i]=='(')
                {
                    st.push(s[i]);
                    continue;
                }
                if(s[i]==')')
                {
                    while(!st.empty())
                    {
                        x=st.top();
                        st.pop();
                        if(x=='(')break;
                        postfix+=x;
                    }
                    continue;
                }
                while(!st.empty())
                {
                    x=st.top();
                    if(p[x]==p[s[i]] || p[x]>p[s[i]])
                    {
                        postfix+=x;
                        st.pop();
                    }
                    else break;
                }
                st.push(s[i]);
            }
        }
        while(!st.empty())
        {
            postfix+=st.top();
            st.pop();
        }
        cout<<postfix<<endl;
        if(n)printf("\n");
    }
    return 0;
}
/*

1

(
3
+
2
)
*
5

*/
