#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int main()
{
    int n,m,count=0;
    vector<string>v;
    string s,s1,s2;
    scanf("%d",&m);
    for(int i=0; i<m; i++)
    {
        if(i)
        {
            printf("\n");
        }
        count=0;
        scanf("%d",&n);
        v.clear();
        getchar();
        for(int j=0; j<n; j++)
        {
            cin>>s;
            for(int i=0; i<s.size()+1; i++)
            {
                if(s[i]=='A' || s[i]=='B' || s[i]=='C') s1+='2';
                if(s[i]=='D' || s[i]=='E' || s[i]=='F') s1+='3';
                if(s[i]=='G' || s[i]=='H' || s[i]=='I') s1+='4';
                if(s[i]=='J' || s[i]=='K' || s[i]=='L') s1+='5';
                if(s[i]=='M' || s[i]=='N' || s[i]=='O') s1+='6';
                if(s[i]=='P' || s[i]=='R' || s[i]=='S') s1+='7';
                if(s[i]=='T' || s[i]=='U' || s[i]=='V') s1+='8';
                if(s[i]=='W' || s[i]=='X' || s[i]=='Y') s1+='9';
                else if(isdigit(s[i])) s1+=s[i];

            }
            int t=3;
            for(int i=0; i<s1.size()+1; i++)
            {
                if(i==t)
                {
                    s2+='-';
                    t=0;
                    i--;
                }
                else s2+=s1[i];
            }
            v.push_back(s2);
            s1.clear();
            s2.clear();
        }
        sort(v.begin(),v.end());
        int b=0;
        for(int i=0; i<v.size(); i++)
        {
//            cout<<v[i]<<" loop "<<i<<endl;
            for(int j=i; j<v.size(); j++)
            {
                if(v[i]==v[j])
                {
                    count++;
                    if(j==v.size()-1)
                    {
                        if(count>=2)
                        {
                            cout<<v[i]<<" "<<count<<endl;
                            b=1;
                        }
                        i=j;
                        break;
                    }
//                    cout<<v[i]<<" "<<"count "<<count<<endl;
                }
                else if(v[i]!=v[j])
                {
                    if(count==1)
                    {
                        i=j-1;
                        count=0;
                        break;
                    }
                    if(count>=2)
                    {
                        b=1;
                        cout<<v[i]<<" "<<count<<endl;
                        i=j-1;
                        count=0;
                        break;
                    }
                }
            }
        }
        if(!b) printf("No duplicates.\n");
    }
    return 0;
}
