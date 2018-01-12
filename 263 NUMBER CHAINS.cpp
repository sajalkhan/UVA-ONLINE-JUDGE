/**--------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 263 NUMBER CHAINS
----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int n;
    while(scanf("%d",&n) && n)
    {
        int count=0;
        long result=0;
        map<int,bool>mp;
        printf("Original number was %d\n",n);
        while(mp[n]=true)
        {
            stringstream ss;
            string s1,s2;
            ss<<n;
            ss>>s1;
            sort(s1.begin(),s1.end());
            s2=s1;
            reverse(s2.begin(),s2.end());
            int num1,num2;
            stringstream ss1(s1),ss2(s2);
            ss1>>num1;
            ss2>>num2;
            printf("%d - %ld = %d\n",num2,num1,(num2-num1));
            n=num2-num1;
            count++;
            if(mp[n])
            {
                printf("Chain length %d\n\n",count);
                break;
            }
        }
    }
    return 0;
}
