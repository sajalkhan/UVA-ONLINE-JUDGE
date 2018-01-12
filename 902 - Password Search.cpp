///Md.soharub hossen
///Daffodil international university

#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int n;
    string s;
    while(cin>>n>>s)
    {
        map<string,int>mp;
        map<string,int>::iterator it;
        int ln=s.size();
        for(int i=0;i<=ln-n;i++)
        {
            int count=1;
            string x;
            x+=s[i];
            for(int j=i+1;count<n;j++,count++)x+=s[j];
            mp[x]++;
        }
        int mx=0;
        for(it=mp.begin();it!=mp.end();it++)
        {
            if(mx<it->second)
            {
                mx=it->second;
                s=it->first;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
