/**-----------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 1727 COUNTING WEEKEND DAYS
-------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int find(string t)
{
    string s[]={"SUN","MON","TUE","WED","THU","FRI","SAT"};
    for(int i=0;;i++)if(s[i]==t)return i;
}
int main()
{
    int t;
    string month,day;
    map<string,int>c;
    c["JAN"]=31;
    c["FEB"]=28;
    c["MAR"]=31;
    c["APR"]=30;
    c["MAY"]=31;
    c["JUN"]=30;
    c["JUL"]=31;
    c["AUG"]=31;
    c["SEP"]=30;
    c["OCT"]=31;
    c["NOV"]=30;
    c["DEC"]=31;
    scanf("%d",&t);
    getline(cin,day);
    while(t--)
    {
        int count=0;
        cin>>month>>day;
        int D=c[month];
        int E=find(day);
        for(int i=0;i<D;i++,E++)
        {
            if(E==5 || E==6)count++;
            if(E==6)E=-1;
        }
        printf("%d\n",count);
    }
    return 0;
}
