/*------------------------------------------
    MD.SOHARUB HOSSEN
    DAFFODIL INTERNATIONAL UNIVERSITY(DHAKA)
    PROBLEM: UVA 10945 MOTHER BEAR
---------------------------------------------*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s) && s!="DONE")
    {
        string s1,s2;
        int ln=s.size();
        if(!ln)continue;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        for(int i=0;i<ln;i++)if(isalpha(s[i]))s1+=s[i];
        int Ln=s1.size();
        for(int i=Ln-1;i>=0;i--)s2+=s1[i];
        if(s1==s2)cout<<"You won't be eaten!"<<endl;
        else cout<<"Uh oh.."<<endl;
    }
    return 0;
}
