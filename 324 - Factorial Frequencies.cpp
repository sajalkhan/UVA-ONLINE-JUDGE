/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
string factorial(string a,int n)
{
    string b;
    int carry=0;
    int size=a.size();
    reverse(a.begin(),a.end());
    for(int i=0; i<size; i++)
    {
        int num=(a[i]-'0')*n+carry;
        b+=(num%10)+'0';
        carry=num/10;
    }
    while(carry)
    {
        b+=(carry%10)+'0';
        carry/=10;
    }
    reverse(b.begin(),b.end());
    return b;
}
int main()
{
    string s[1007];
    s[0]='1';
    s[1]='1';
    for(int i=2; i<=1000; i++)s[i]=factorial(s[i-1],i);
    int n;
    while(cin>>n && n)
    {
        string s1=s[n];
        int size=s1.size();
        int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,I=0,j=0;
        for(int i=0; i<size; i++)
        {
            if(s1[i]=='0')a++;
            if(s1[i]=='1')b++;
            if(s1[i]=='2')c++;
            if(s1[i]=='3')d++;
            if(s1[i]=='4')e++;
            if(s1[i]=='5')f++;
            if(s1[i]=='6')g++;
            if(s1[i]=='7')h++;
            if(s1[i]=='8')I++;
            if(s1[i]=='9')j++;
        }
        printf("%d! --\n",n);
        printf("   (0)   %d",a);
        printf("   (1)   %d",b);
        printf("   (2)   %d",c);
        printf("   (3)   %d",d);
        printf("   (4)   %d\n",e);
        printf("   (5)   %d",f);
        if(((a>=10) && f<10)||((f>=10) && a<10)||(a>=100 && f<100)||(f>=100 && a<100))printf(" ");
        printf("   (6)   %d",g);
        if(((b>=10) && g<10)||((g>=10)&& b<10)||(b>=100 && g<100)||(g>=100 && b<100))printf(" ");
        printf("   (7)   %d",h);
        if(((c>=10) && h<10)||((h>=10)&&(c<10))||(c>=100 && h<100)||(h>=100 && c<100))printf(" ");
        printf("   (8)   %d",I);
        if(((d>=10) && I<10)||((I>=10)&&(d<10))||(d>=100 && I<100)||(I>=100 && d<100))printf(" ");
        printf("   (9)   %d\n",j);
    }
    return 0;
}