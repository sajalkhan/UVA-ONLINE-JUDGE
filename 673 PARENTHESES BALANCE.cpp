/*-------------------------------------------
    MD.SOHARUB HOSSEN
    DAFFODIL INTERNATIONAL UNIVERSITY(DHAKA)
    PROBLEM: UVA 673 PARENTHESES BALANCE
---------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    for(int i=0; i<n; i++)
    {
        string s;
        getline(cin,s);
        stack<char>st;
        int ln=s.size();
        for(int i=0; i<ln; i++)
        {
            if(st.empty() && (s[i]==')' || s[i]==']'))
            {
                st.push('1');
                break;
            }
            if(s[i]=='(' || s[i]=='[')st.push(s[i]);
            if((s[i]==')' && st.top()=='(') || (s[i]==']' && st.top()=='['))st.pop();
        }
        if(st.empty())printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
