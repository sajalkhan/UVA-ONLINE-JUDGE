/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(cin>>t)
    {
        int a[t+2],b[t+2];
        for(int i=0; i<t; i++)
        {
            scanf("%d",&a[i]);
        }
        int result=1,I=0,j=0;
        for(int i=0; i<t-1; i++)
        {
            int temp=abs(a[i+1]-a[i]);
            b[j++]=temp;
        }
        sort(b,b+j);
        for(int i=0; i<j; i++)
        {
            if(result==b[i])++result;
            else
            {
                I=1;
                break;
            }
        }
        if(!I)printf("Jolly\n");
        else printf("Not jolly\n");
    }
    return 0;
}