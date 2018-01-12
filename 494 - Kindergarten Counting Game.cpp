/// 494 - Kindergarten Counting Game
#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
#define max 100000
int main()
{
    int i, word,count;
    char ch[max];
    while(gets(ch))
    {

        count=0;
        word=0;
        for(i=0; ch[i]!='\0'; i++)
        {
            if(((ch[i]>='a' && ch[i]<='z') || ( ch[i]>='A' && ch[i]<='Z')))
            {
                word=1;
            }
            else
            {
                if(word==1)
                {
                    count++;
                    word=0;
                }
            }

        }
        if(ch[i]=='\0' && word==1)
            count++;
        printf("%d\n",count);
    }
    return 0;
}
