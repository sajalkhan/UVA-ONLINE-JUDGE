/**------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 11233 DELI DELI
--------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int vowel(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')return true;
    return false;
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t,n;
    string s,s1;
    map<string,string>mp;
    map<string,bool>visit;
    scanf("%d %d",&t,&n);
    getline(cin,s);
    for(int i=0; i<t; i++)
    {
        cin>>s>>s1;
        visit[s]=true;
        mp[s]=s1;
    }
    getchar();
    for(int i=0; i<n; i++)
    {
        cin>>s;
        if(visit[s])cout<<mp[s]<<endl;
        else
        {
            int ln=s.size();
            if(s[ln-1]=='y' && vowel(s[ln-2])==false)
            {
                s.erase(s.begin()+ln-1);
                cout<<s<<"ies"<<endl;
            }
            else if(s[ln-1]=='o'||s[ln-1]=='s'|| (s[ln-1]=='h' && s[ln-2]=='c')|| (s[ln-1]=='h' && s[ln-2]=='s')||s[ln-1]=='x')
            {
                cout<<s<<"es"<<endl;
            }
            else cout<<s<<"s"<<endl;
        }
    }
    return 0;
}
