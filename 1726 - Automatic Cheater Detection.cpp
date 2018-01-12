/*---------------------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 1726 - Automatic Cheater Detection
----------------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    int t,n,d,s;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int C=0,I=0;
        vector<int>incorrect;
        vector<int>correct;
        vector<int>::iterator found;
        for(int i=0;i<n;i++)
        {
            scanf("%d %d %c",&d,&s,&c);
            if(c=='i' && s==0)incorrect.push_back(d);
            if(c=='c' && s==1)correct.push_back(d);
        }
        int count=0;
        int ln=incorrect.size();
        int cn=correct.size();
        sort(correct.begin(),correct.end());
        for(int i=0;i<ln;i++)
        {
            found=upper_bound(correct.begin(),correct.end(),incorrect[i]);
            count+=cn-(found-correct.begin());
        }
        printf("%d\n",count);
    }
    return 0;
}
