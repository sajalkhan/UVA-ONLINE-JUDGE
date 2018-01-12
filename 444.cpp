#include<bits/stdc++.h>
using namespace std;
int rev(int a)
{
    int sum=0,r=0;
    while(a!=0)
    {
        sum=sum*10+(r=a%10);
        a=a/10;
    }
    return sum;
}
string revs(string s)
{
    string s1,s2;
    int count=0,a=0,r=0;
    for(int i=s.size()-1; i>=0; i--)
    {
        if(count<=2)
        {
            a=r*10+s[i]-48;
            r=s[i]-48;
            count++;
        }
        if(count==2 && (a>=32 && a<=122))
        {
            s2+=char(a);
            a=0,r=0;
            count=0;
        }
        if(count==2 && a<32)
        {
            r=a;
            count=1;
        }
    }
    return s2;
}
int main()
{
    string s,s1;
    int a[100];
    while(getline(cin,s))
    {
        int j=0,b=0,d=0;
        s1.clear();
        for(int i=0; i<s.size(); i++)
        {
            if(!isdigit(s[0]))
            {
                b=1;
                d=0;
            }
            else if(isdigit(s[0]))
            {
                b=0;
                d=1;
            }
            if(b==1 && d==0) a[j++]=rev(int(s[i]));
            else if(b==0 && d==1) s1+=s[i];
        }
        if(b)for(int i=j-1; i>=0; i--)
            {
                if(a[i]==1)cout<<"001";
                else if(a[i]==5)cout<<"05";
                else if(a[i]==6)cout<<"06";
                else if(a[i]==7)cout<<"07";
                else if(a[i]==8)cout<<"08";
                else if(a[i]==9)cout<<"09";
                else if(a[i]==11)cout<<"011";
                else if(a[i]==21)cout<<"021";
                else cout<<a[i];
            }
        if(!b)cout<<revs(s1);
        cout<<endl;

    }
    return 0;
}
/*
i must do what i must do !
332311100123611511711901235012361179401911231110012361151171190123501
Try all the silly cases you can think of
this IS a SILLY case :p
21185231015117999239867673738237923383723511501401611
*/
