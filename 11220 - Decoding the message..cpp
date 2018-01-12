/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    scanf("%d",&n);
    getchar();
    getchar();
    for(int i=0;i<n;i++)
    {
        if(i)printf("\n");
        int J=0;
        string msg[1000];
        while(getline(cin,s))
        {
            int ln=s.size();
            if(!ln)break;
            stringstream ss(s);
            string s1;
            int I=0;
            while(ss>>s1)
            {
                for(int j=0;j<s1.size();j++)
                {
                  if(I==j)
                  {
                      msg[J]+=s1[j];
                      I++;
                      break;
                  }
                }
            }
            J++;
        }
        printf("Case #%d:\n",i+1);
        for(int k=0;k<J;k++)cout<<msg[k]<<endl;
    }
    return 0;
}