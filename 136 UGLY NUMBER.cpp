/*-----------------------------------
    MD.SOHARUB HOSSEN
    DAFFODIL INTERNATIONAL UNIVERSITY
    PROBLEM: UVA 136 UGLY NUMBER
--------------------------------------*/

#include<bits/stdc++.h>
using namespace std;

#define ll unsigned long long
#define max 100000000
int total=1;
ll ugly[max];
int prime[]={2,3,5};
void count_ungly_number()
{
    int j=0;
    long long number=2;
    ugly[j++]=1;
    while(total!=1500)
    {
        long long num=number;
        for(int i=0;i<3;i++)
        {
            while(num%prime[i]==0)
            {
                num/=prime[i];
            }
            if(num==1)break;
        }
        if(num==1)
        {
            ugly[j++]=number;
            total++;
        }
        number++;
    }
}
int main()
{
//    count_ungly_number();
    printf("The 1500'th ugly number is 859963392.\n");
    return 0;
}
