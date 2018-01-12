/**-------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 12896 MOBILE SMS
---------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string>s;
    s[0]=" ";
    s[1]=".,?";
    s[2]="abc";
    s[3]="def";
    s[4]="ghi";
    s[5]="jkl";
    s[6]="mno";
    s[7]="pqrs";
    s[8]="tuv";
    s[9]="wxyz";
    int t,n,a[1000],b[1000];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=0;i<n;i++)scanf("%d",&a[i]);
        for(int i=0;i<n;i++)scanf("%d",&b[i]);
        for(int i=0;i<n;i++)
        {
            if(a[i]==1 && b[i]==4)
            {
                printf("%c",'"');
                continue;
            }
            cout<<s[a[i]][b[i]-1];
        }
        printf("\n");
    }
    return 0;
}
