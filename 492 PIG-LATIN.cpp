/**-----------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 492 PIG-LATIN
-------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    string s;
    while(getline(cin,s))
    {
        int b=0;
        char c;
        string result;
        int ln=s.size();
        for(int i=0; i<ln; i++)
        {
            if(isalpha(s[i]))
            {
                if(!b && (s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U'))b=1;
                if(!b)
                {
                    b=2;
                    c=s[i];
                    continue;
                }
                result+=s[i];
                if(i==ln-1)ln+=1;
            }
            else
            {
                if(b==1)
                {
                    b=0;
                    result+="ay";
                    result+=s[i];
                    continue;
                }
                if(b==2)
                {
                    b=0;
                    result+=c;
                    result+="ay";
                    result+=s[i];
                    continue;
                }
                result+=s[i];
            }
        }
        cout<<result<<endl;
    }
    return 0;
}
