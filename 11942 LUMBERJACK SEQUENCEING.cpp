
/*
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 11942 LUMBERJACK SEQUENCEING
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    printf("Lumberjacks:\n");
    while(t--)
    {
        int a[20],n,count1=0,count2=0;
        for(int i=0;i<10;i++)scanf("%d",&a[i]);
        for(int i=0;i<10-1;i++)
        {
            int result=a[i]-a[i+1];
            if(result<0)count1++;
            else count2++;
            if(count1 && count2)break;
        }
        if(count1 && count2)printf("Unordered\n");
        else printf("Ordered\n");
    }
    return 0;
}
