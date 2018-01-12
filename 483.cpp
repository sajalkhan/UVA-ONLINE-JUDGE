#include<bits/stdc++.h>
using namespace std;
string rev(string s)
{
    string s1;
    for(int i=s.size()-1; i>=0; i--)s1+=s[i];
    return s1;
}
int main()
{
    string s1,s2[1000];
    int j=0;
    while(cin>>s1)
    {
        s2[j++]=rev(s1);
        if(getchar()=='\n')
        {
            for(int i=0; i<j; i++)
            {
                if(i==j-1)cout<<s2[i]<<endl;
                else cout<<s2[i]<<" ";
            }
            j=0;
        }
    }
    return 0;
}
