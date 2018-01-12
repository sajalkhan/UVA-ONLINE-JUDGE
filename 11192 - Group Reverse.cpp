/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n && n)
    {
        string s1,s2,s3;
        cin>>s1;
        int size=s1.size()/n;
        if(s1.size()!=size*n)s1.erase(0,s1.size()-(size*n));
        while(!s1.empty())
        {
            for(int i=size-1;i>=0;i--)s2+=s1[i];
            s1.erase(0,size);
        }
        cout<<s2<<endl;
    }
    return 0;
}