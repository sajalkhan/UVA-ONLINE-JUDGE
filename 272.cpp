#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10000];
    long long count,i;
    while(gets(s))
    {
        int ln=strlen(s);
        for(i=0; i<ln; i++)
        {
            if(s[i]=='"')
            {
                count++;
                if(count%2==1)
                {
                    cout<<"``";
                }
                else if(count%2==0)
                {
                    cout<<"''";
                }
            }
            else
            {
                    cout<<s[i];
            }
        }
        cout<<endl;
    }
    return 0;
}
