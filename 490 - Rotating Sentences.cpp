/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string s1[111];
    for(int i=0; i<111; i++)
    {
        for(int j=0; j<111; j++)s1[j]+=" ";
    }
    int k=0,row=0;
    while(getline(cin,s))
    {
        int ln=s.size();
        for(int i=0; i<ln; i++)
        {
            s1[i][k]=s[i];
            if(row<i)row=i;
        }
        k++;
    }
    for(int i=0; i<=row; i++)
    {
        for(int j=k-1; j>=0; j--)
        {
            cout<<s1[i][j];
        }
        cout<<endl;
    }
    return 0;
}