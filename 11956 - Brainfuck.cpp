/*----------------------------------
    AUTHOR: SAJAL KHAN
    PROBLEM: UVA 11956 - Brainfuck
-----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,Case=1;
    char s[100000*2];
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        gets(s);
        int a[101]={0};
        int pointer=0;
        int ln=strlen(s);
        for(int i=0;i<ln;i++)
        {
            if(s[i]=='>')pointer++;
            if(s[i]=='<')pointer--;
            if(pointer==100)pointer=0;
            if(pointer==-1)pointer=99;
            if(s[i]=='+')a[pointer]++;
            if(s[i]=='-')a[pointer]--;
            if(a[pointer]==256)a[pointer]=0;
            if(a[pointer]==-1)a[pointer]=255;
        }
        printf("Case %d:",Case++);
        for(int i=0;i<100;i++)printf(" %02X",a[i]);
        printf("\n");
    }
    return 0;
}
/*
1
..++<><<+++>>++++++++++++++++++++++++++>>>+++<+...++<><<+++>>++++++++++++++++++++++++++>>>+++<+...++<><<+++>>++++++++++++++++++++++++++>>>+++<+.
*/
