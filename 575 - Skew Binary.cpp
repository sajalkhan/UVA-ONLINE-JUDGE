/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s && s!="0")
    {
        int size=s.size();
        int size1=size;
        long long n=0;
        for(int i=0;i<size1;i++)
        {
            if(s[i]!='0')n+=(s[i]-48)*(pow(2,size)-1);
            size--;
        }
        cout<<n<<endl;
    }
    return 0;
}