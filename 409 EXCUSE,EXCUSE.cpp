/**--------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 409 EXCUSE,EXCUSE
----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,e,T=1;
    while(~scanf("%d %d",&k,&e))
    {
        string s;
        getchar();
        int result=0;
        map<string,bool>M1;
        map<string,int>M2;
        map<string,int>::iterator it;
        for(int i=0;i<k;i++)
        {
            cin>>s;
            M1[s]=true;
        }
        getchar();
        for(int i=0;i<e;i++)
        {
            string r;
            getline(cin,s);
            int ln=s.size(),count=0;
            for(int j=0;j<ln;j++)
            {
                if(isalpha(s[j]))r+=tolower(s[j]);
                if(!isalpha(s[j]) || j==ln-1)
                {
                    if(M1[r])count++;
                    r.clear();
                }
            }
            if(result<count)result=count;
            M2[s]=count;
        }
        printf("Excuse Set #%d\n",T);
        for(it=M2.begin();it!=M2.end();it++)
        {
            if(it->second==result)cout<<it->first<<endl;
        }
        printf("\n");
        T++;
    }
    return 0;
}
