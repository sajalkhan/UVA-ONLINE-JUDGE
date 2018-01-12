/*----------------------------------------------------
    AUTHOR: SAJAL KHAN
    PROBLEM: UVA 740 - Baudot Data Communication Code
-----------------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string code;
    string s[]= {"00000","00001","00010","00011","00100","00101","00110","00111","01000","01001","01010","01011","01100","01101","01110","01111","10000","10001","10010","10011","10100","10101","10110","10111","11000","11001","11010","11011","11100","11101","11110","11111"};
    char shift_down[50],shift_up[50];
    gets(shift_down);
    gets(shift_up);
    int ln1=strlen(shift_down);
    int ln2=strlen(shift_up);
    map<string,char>Down,Up;
    for(int i=0; i<32; i++)
    {
        if(i==27 || i==31)continue;
        Down[s[i]]=shift_down[i];
        Up[s[i]]=shift_up[i];
    }
    while(cin>>code)
    {
        int D=0,U=1;
        int ln=code.size();
        for(int i=0; i<ln; i+=5)
        {
            string c=code.substr(i,5);
            if(c=="11011")
            {
                D=0,U=1;
                continue;
            }
            if(c=="11111")
            {
                D=1,U=0;
                continue;
            }
            if(!D)cout<<Down[c];
            if(!U)cout<<Up[c];
        }
        printf("\n");
    }
    return 0;
}
/*
<T*O HNM=LRGIPCVEZDBSYFXAWJ UQK
>5@9 %,.+)4&80:;3"$?#6!/-2' 71(
100100110011000010011111101110000111110111101
001100001101111001001111100001001100010001100110111100000111
*/
