/*
    AUTHOR: SAJAL KHAN
    PROBLEM: 10992 - The Ghost of Programmers
*/
#include<bits/stdc++.h>
using namespace std;
string sub(string s1,string s2)
{
    int carry=0;
    int L1=s1.size();
    int L2=s2.size();
    string s3,final_result;
    for(int i=L1-1; i>=0; i--)
    {
        int num1=s1[i]-'0'-carry;
        int num2=0;
        if(L2)num2=s2[L2-1]-'0',L2--;
        if(num1<num2)num1+=10,carry=1;
        else carry=0;
        stringstream ss;
        ss<<(num1-num2)+'0';
        int result;
        ss>>result;
        s3+=result;
    }
    int ln=s3.size(),t=0;
    reverse(s3.begin(),s3.end());
    for(int i=0; i<ln; i++)
    {
        if(!t && s3[i]=='0')continue;
        t=1;
        final_result+=s3[i];
    }
    return final_result;
}
int mod(string s,int n)
{
    int M=0;
    int ln=s.size();
    for(int i=0; i<ln; i++)
    {
        M=(M*10+s[i]-'0')%n;
    }
    return M;
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t=0;
    string s;
    while(cin>>s && s!="0")
    {
        int b=0;
        if(t)printf("\n");
        t++;
        string result=sub(s,"2148");
        cout<<s<<endl;
        stringstream ss(s);
        long long n;
        ss>>n;
        if(n<2148)
        {
            printf("No ghost will come in this year\n");
            continue;
        }
        if(!mod(result,2))b=1,printf("Ghost of Tanveer Ahsan!!!\n");
        if(!mod(result,5))b=1,printf("Ghost of Shahriar Manzoor!!!\n");
        if(!mod(result,7))b=1,printf("Ghost of Adrian Kugel!!!\n");
        if(!mod(result,11))b=1,printf("Ghost of Anton Maydell!!!\n");
        if(!mod(result,15))b=1,printf("Ghost of Derek Kisman!!!\n");
        if(!mod(result,20))b=1,printf("Ghost of Rezaul Alam Chowdhury!!!\n");
        if(!mod(result,28))b=1,printf("Ghost of Jimmy Mardell!!!\n");
        if(!mod(result,36))b=1,printf("Ghost of Monirul Hasan!!!\n");
        if((mod(s,4)==0 && mod(s,100)!=0)||mod(s,400)==0)b=1,printf("Ghost of K. M. Iftekhar!!!\n");
        if(!b)printf("No ghost will come in this year\n");
    }
    return 0;
}
