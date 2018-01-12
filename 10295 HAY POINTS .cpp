/**---------------------------------------------------
|    MD.SOHARUB HOSSEN                                |
|    DAFFODIL INTERNATIONAL UNIVERSITY(DHAKA)         |
|    PROBLEM: UVA 10295 HAY POINTS                    |
------------------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,m,money;
    scanf("%d %d",&n,&m);
    getchar();
    map<string,long long>mp;
    for(int i=0;i<n;i++)
    {
        cin>>s>>money;
        mp[s]=money;
    }
    getchar();
    for(int i=0;i<m;i++)
    {
        long long result=0;
        while(getline(cin,s))
        {
            if(s[0]=='.')break;
            transform(s.begin(),s.end(),s.begin(),::tolower);
            stringstream ss(s);
            string word;
            while(ss>>word)if(mp[word])result+=mp[word];
        }
        printf("%lld\n",result);
    }
    return 0;
}
