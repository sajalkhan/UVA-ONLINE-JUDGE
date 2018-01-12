/*+++++++++++++++++++++++++++++++++++
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 10931 COMPUND WORDS
+++++++++++++++++++++++++++++++++++++*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,x,y;
    set<string>st;
    map<string,bool>mp;
    set<string>::iterator it;
    while(getline(cin,s) && s.size())st.insert(s);
    for(it=st.begin();it!=st.end();it++)
    {
        string word=*it;
        int ln=word.size();
        for(int i=1;i<ln;i++)
        {
            x=word.substr(0,i);
            y=word.substr(i);
            if(st.find(x)!=st.end() && st.find(y)!=st.end() && !mp[x+y])cout<<word<<endl,mp[x+y]=true;
        }
    }
    return 0;
}
