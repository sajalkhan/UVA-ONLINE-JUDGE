#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    char ch[6];
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>ch;
        if(strlen(ch)==3)
        {
            if(ch[0]=='o'&& ch[1]=='n' || ch[0]=='o'&& ch[2]=='e' || ch[1]=='n' && ch[2]=='e')
            {
                cout<<1<<endl;
            }
            else if(ch[0]=='t'&& ch[1]=='w' || ch[0]=='t'&& ch[2]=='o' || ch[1]=='w' && ch[2]=='o')
            {
                cout<<2<<endl;
            }
        }
        else if(strlen(ch)>3)
        {
            cout<<3<<endl;
        }
    }
    return 0;
}
