/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1[100];
    int j=0,t=1;
    while(cin>>s)
    {
        if(s!="9")s1[j++]=s;
        else
        {
            int b=0;
            for(int i=0; i<j-1; i++)
            {
                string s2;
                s2+=s1[i];
                for(int k=i+1; k<j; k++)
                {
                    for(int L=0; L<min(s2.size(),s1[k].size()); L++)
                    {
                        if(s1[k][L]==s2[L])b=1;
                        else
                        {
                            b=0;
                            break;
                        }
                    }
                    if(b)break;
                }
                if(b)break;
            }
            if(!b)printf("Set %d is immediately decodable\n",t);
            else printf("Set %d is not immediately decodable\n",t);
            j=0;
            t++;
        }
    }
    return 0;
}