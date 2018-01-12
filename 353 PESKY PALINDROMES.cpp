/*-------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 353 PESKY PALINDROMES
--------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int palindrome(string s)
{
    string p=s;
    reverse(s.begin(),s.end());
    if(p==s)return 1;
    else return 0;
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    string s;
    while(cin>>s)
    {
        int total=0;
        int ln=s.size();
        map<string,bool>mp;
        set<char>st;
        for(int i=0;i<ln-1;i++)
        {
            st.insert(s[i]);
            string p;
            for(int j=i;j<ln;j++)
            {
                p+=s.substr(i,ln-j);
                int sz=p.size();
                if(sz>1)
                {
                    if(!mp[p])
                    {
                        mp[p]=true;
                        int result=palindrome(p);
                        total+=result;
                    }
                }
                p.clear();
            }
        }
        st.insert(s[ln-1]);
        total+=st.size();
        cout<<"The string '"<<s<<"' contains "<<total<<" palindromes."<<endl;
    }
    return 0;
}
