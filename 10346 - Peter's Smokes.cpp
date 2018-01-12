/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long a,b;
    while(cin>>a>>b)
    {
        long result=a;
        while((a/b)!=0)
        {
            result+=a/b;
            a=(a-(b*(a/b)))+a/b;
        }
        printf("%ld\n",result);
    }
    return 0;
}