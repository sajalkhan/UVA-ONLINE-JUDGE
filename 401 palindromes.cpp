#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[1000],s2[1000],s3[1000],s4[1000],s5[1000];
    while(scanf("%s",s1)!=EOF)
    {
        int j=0,k=0;
        for(int i=0; i<strlen(s1); i++)
        {
            s3[k++]=s1[i];
            if(s1[i]=='A') s2[j++]='A';
            else if(s1[i]=='E') s2[j++]='3';
            else if(s1[i]=='H') s2[j++]='H';
            else if(s1[i]=='I') s2[j++]='I';
            else if(s1[i]=='J') s2[j++]='L';
            else if(s1[i]=='L') s2[j++]='J';
            else if(s1[i]=='M') s2[j++]='M';
            else if(s1[i]=='O') s2[j++]='O';
            else if(s1[i]=='T') s2[j++]='T';
            else if(s1[i]=='U') s2[j++]='U';
            else if(s1[i]=='S') s2[j++]='2';
            else if(s1[i]=='V') s2[j++]='V';
            else if(s1[i]=='W') s2[j++]='W';
            else if(s1[i]=='X') s2[j++]='X';
            else if(s1[i]=='Y') s2[j++]='Y';
            else if(s1[i]=='Z') s2[j++]='5';
            else if(s1[i]=='1') s2[j++]='1';
            else if(s1[i]=='2') s2[j++]='S';
            else if(s1[i]=='3') s2[j++]='E';
            else if(s1[i]=='5') s2[j++]='Z';
            else if(s1[i]=='8') s2[j++]='8';
        }
        s2[j]='\0';
        s3[k]='\0';
        int L=0;
        int M=0;
        for(int i=strlen(s2)-1; i>=0; i--)
        {
            s4[L++]=s2[i];
        }
        s4[L]='\0';
        for(int i=strlen(s3)-1; i>=0; i--)
        {
            s5[M++]=s3[i];
        }
        s5[M]='\0';
        if(strcmp(s1,s4)!=0 && strcmp(s1,s5)==0)
        {
            printf("%s -- is a regular palindrome.\n",s1);
        }
        else if(strcmp(s1,s4)==0 && strcmp(s1,s5)!=0)
        {
            printf("%s -- is a mirrored string.\n",s1);
        }
        else if(strcmp(s1,s4)==0 && strcmp(s1,s5)==0)
        {
            printf("%s -- is a mirrored palindrome.\n",s1);
        }
        else printf("%s -- is not a palindrome.\n",s1);
        printf("\n");
    }
    return 0;
}
