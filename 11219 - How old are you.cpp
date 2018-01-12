///Md.soharub hossen
///Daffodil international university

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,test=1;
    scanf("%d",&n);
    getchar();
    getchar();
    while(n--)
    {
        int count=0;
        int d1,d2,m1,m2,y1,y2;
        char x[20],*p;
        char y[20];

        scanf("%s",x);
        p=strtok(x,"/");
        while(p)
        {
            if(count==0)d1=atoi(p);
            if(count==1)m1=atoi(p);
            if(count==2)y1=atoi(p);
            p=strtok(NULL,"/");
            count++;
        }

        count=0;
        scanf("%s",y);
        p=strtok(y,"/");
        while(p)
        {
            if(count==0)d2=atoi(p);
            if(count==1)m2=atoi(p);
            if(count==2)y2=atoi(p);
            p=strtok(NULL,"/");
            count++;
        }
        getchar();
        getchar();

        printf("Case #%d: ",test++);
        int result=y1-y2;
        if((m1-m2)==0)
        {
            if((d1-d2)<0)
            {
                result-=1;
                if(result>130)printf("Check birth date\n");
                else if(result<0)printf("Invalid birth date\n");
                else printf("%d\n",result);
            }
            else
            {
                if(result>130)printf("Check birth date\n");
                else if(result<0)printf("Invalid birth date\n");
                else printf("%d\n",result);
            }
        }
        else if((m1-m2)<0)
        {
            result-=1;
            if(result>130)printf("Check birth date\n");
            else if(result<0)printf("Invalid birth date\n");
            else printf("%d\n",result);
        }
        else if((m1-m2)>0)
        {
            if(result>130)printf("Check birth date\n");
            else if(result<0)printf("Invalid birth date\n");
            else printf("%d\n",result);
        }

    }
    return 0;
}
/*

4

01/01/2007
10/02/2007

09/06/2007
28/02/1871

12/11/2007
01/01/1984

28/02/2005
29/02/2004

*/
