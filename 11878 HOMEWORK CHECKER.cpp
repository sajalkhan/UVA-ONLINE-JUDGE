/**-------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 11878 HOMEWORK CHECKER
---------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int count=0;
    while(cin>>s)
    {
        int ln=s.size();
        string n1,n2,n3;
        int plus=0,minus=0,b=1;
        for(int i=0;i<ln;i++)
        {
            if(s[i]=='+')
            {
                b++;
                plus=1;
                continue;
            }
            if(s[i]=='-')
            {
                b++;
                minus=1;
                continue;
            }
            if(s[i]=='=')
            {
                b++;
                continue;
            }
            if(b==1)n1+=s[i];
            if(b==2)n2+=s[i];
            if(b==3)n3+=s[i];
        }
        if(n3!="?")
        {
            int num1,num2,num3;
            stringstream ss1(n1);
            ss1>>num1;
            stringstream ss2(n2);
            ss2>>num2;
            stringstream ss3(n3);
            ss3>>num3;
            if(plus && (num1+num2==num3))count++;
            if(minus && (num1-num2==num3))count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
