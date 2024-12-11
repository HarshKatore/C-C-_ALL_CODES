#include <stdio.h>
#include <string.h>
int main()
{
char pass[20];
int i,length,num=1,alph=1,special=1;
printf("Enter the password : ");
scanf("%s",pass);
length=strlen(pass);
if(length>6 && length <13)
{
for(i=0;pass[i]!='\0';i++)


{
if(pass[i]>='0' && pass[i]<='9')
{num++;}
if(pass[i]>='A' && pass[i]<='z')
{alph++;}
if(pass[i]=='@' || pass[i]=='#' || pass[i]=='$')
{special++;}
}
if(num!=1 && alph!=1 && special!=1)
printf("valid password");
else{printf("invalid password");}
}
else
{printf("invalid password");}
return 0;
}

