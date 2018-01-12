/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    map<char,char>mp;
    mp['0']='O';
    mp['1']='I';
    mp['2']='Z';
    mp['3']='E';
    mp['4']='A';
    mp['5']='S';
    mp['6']='G';
    mp['7']='T';
    mp['8']='B';
    mp['9']='P';
    string s;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++)
    {
        if(i)printf("\n");
        while(getline(cin,s))
        {
            string s1;
            int ln=s.size();
            if(ln==0)break;
            for(int j=0;j<ln;j++)
            {
                if(mp[s[j]])s1+=mp[s[j]];
                else s1+=s[j];
            }
            cout<<s1<<endl;
        }
    }
    return 0;
}