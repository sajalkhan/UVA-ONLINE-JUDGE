/**----------------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 10293 WORD LENGTH AND FREQUENCY
------------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    string s,w,word;
    while(getline(cin,s))
    {
        if(s[0]!='#')
        {
            if(s[s.size()-1]=='-')word+=s;
            else word+=s+" ";
        }
        if(s[0]=='#')
        {
            map<int,int>mp;
            map<int,int>::iterator it;
            int ln=word.size();
            for(int i=0; i<ln; i++)
            {
                if(word[i]=='!' || word[i]=='?' || word[i]==' ' || word[i]=='.' || word[i]==',' || i==ln-1)
                {
                    if(w.size())mp[w.size()]++;
                    w.clear();
                }
                else if(isalpha(word[i]))
                {
                    w+=word[i];
                }
            }
            for(it=mp.begin();it!=mp.end();it++)
            {
                cout<<it->first<<" "<<it->second<<endl;
            }
            printf("\n");
            word.clear();
        }
    }
    return 0;
}
