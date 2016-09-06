#include<stdio.h>
#include<conio.h>
void main()
{
char t[26];
int i,flag[26]={0},alp=0;
scanf("%s",t);
for(i=0;t[i]!='\0';i++)
{
if('a'<=t[i] && t[i]<='z')
{
alp+=!flag[t[i]-'a'];
flag[t[i]-'a']=1;
}
else if('A'<=t[i] && t[i]<='Z')
{
alp+=!flag[t[i]-'A'];
flag[t[i]-'A']=1;
}
}
if(alp==26)
printf("The given string is a Pangram String");
else
printf("The given string is not a Pangram String");
getch();
}
