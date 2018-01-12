/*---------------------------------------------------

    MD.SOHARUB HOSSEN
    DAFFODIL INTERNATIONAL UNIVERSITY(DHAKA)
    PROBLEM: UVA 12243 - Flowers Flourish from France

------------------------------------------------------*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    while(getline(cin,s) && s!="*")
    {
        int b=0;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        stringstream ss(s);
        string word;
        s1=s[0];
        while(ss>>word)
        {
            if(s1[0]!=word[0])
            {
                b=1;
                break;
            }
        }
        if(!b)printf("Y\n");
        else printf("N\n");
    }
    return 0;
}
