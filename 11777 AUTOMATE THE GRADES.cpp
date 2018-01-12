
/*
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 11777 AUTOMATE THE GRADES
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n=0;
        int result=0;
        for(int j=0;j<4;j++)
        {
            scanf("%d",&n);
            result+=n;
        }
        int a[5];
        for(int j=0;j<3;j++)scanf("%d",&a[j]);
        sort(a,a+3,greater<int>());
        result+=(a[0]+a[1])/2;
        printf("Case %d: ",i);
        if(result<60)printf("F\n");
        if(result>=90)printf("A\n");
        if(result>=80 && result<90)printf("B\n");
        if(result>=70 && result<80)printf("C\n");
        if(result>=60 && result<70)printf("D\n");
    }
    return 0;
}
