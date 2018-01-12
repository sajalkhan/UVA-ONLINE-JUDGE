/**---------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: 11616 - Roman Numerals
-----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string>r;
    map<string,int>t;
    r[1]="I";
    r[2]="II";
    r[3]="III";
    r[4]="IV";
    r[5]="V";
    r[6]="VI";
    r[7]="VII";
    r[8]="VIII";
    r[9]="IX";
    r[10]="X";
    r[40]="XL";
    r[50]="L";
    r[90]="XC";
    r[100]="C";
    r[400]="CD";
    r[500]="D";
    r[900]="CM";
    r[1000]="M";
    t["I"]=1;
    t["II"]=2;
    t["III"]=3;
    t["IV"]=4;
    t["V"]=5;
    t["VI"]=6;
    t["VII"]=7;
    t["VIII"]=8;
    t["IX"]=9;
    t["X"]=10;
    t["XL"]=40;
    t["L"]=50;
    t["XC"]=90;
    t["C"]=100;
    t["CD"]=400;
    t["D"]=500;
    t["CM"]=900;
    t["M"]=1000;
    string num;
    while(cin>>num)
    {
        if(isalpha(num[0]))
        {
            string u;
            int result=0;
            int ln=num.size();
            for(int i=0;i<ln;i++)
            {
                u+=num[i];
                if(!t[u])
                {
                    int L=u.size()-1;
                    u.erase(u.begin()+L);
                    i-=1;
                    result+=t[u];
                    u.clear();
                }
                if(i==ln-1)result+=t[u];
            }
            cout<<result<<endl;
        }
        else
        {
            stringstream ss(num);
            int n;
            ss>>n;
            string s;
            int i=0,sum=0;
            int a[]= {1000,900,500,400,100,90,50,40,10};
            while(n)
            {
                int m=n/a[i];
                if(m)
                {
                    n-=(m*a[i]);
                    for(int j=0; j<m; j++)s+=r[a[i]];
                }
                if(n<10)s+=r[n],n=0;
                i++;
            }
            cout<<s<<endl;
        }
    }
    return 0;
}
