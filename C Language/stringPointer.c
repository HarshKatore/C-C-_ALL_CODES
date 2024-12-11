/* Write a C PROGRAM That Uses functions to do  the Following operations in string:1)substring 2) palindrome 3)compare 4)copy 5)reverse */
#include <stdio.h>
void substring(char *s, char *ss)
{
    int j = 0;
    for (int i = 0; s[i] != '\0' && ss[j] != '\0'; i++)
    {
        if (s[i] == ss[j])
        {
            j++;
        }
    }
    
    
    
    if (ss[j] != '\0')
    {

        printf("THE SUB-STRING IS NOT PRESENT INSIDE THE STRING");
        printf("\n---------------------------------------------------");

    }

    else
    {
        printf("THE SUB-STRING IS  PRESENT INSIDE THE STRING");
         printf("\n---------------------------------------------------");
    }
}
void palindrome(char * p){
    int s=0,flag=0;
    for(int i=0;p[i]!='\0';i++){
    s=i;
    }
    
    for(int j=0;j<s;j++){
        if(p[j]==p[s-j-1]){                   //harsh
            flag=0;
        
        }
        else{
            flag=1;
            break;
        }
    }
    if(flag==0){
     printf("\nTHIS STRING IS PALINDROME ");
      printf("\n---------------------------------------------------");
    }  
    else{
         printf("\nTHIS STRING IS NOT PALINDROME");
          printf("\n---------------------------------------------------");
    }
    }  
    
    void compare(char * c1,char * c2){
        int n=0;
        for (int k=0;c1[k]!='\0'&&c2[k]!='\0';k++)
        if(c1[k]==c2[k]){
            n=0;
        }else{
            n=1;
            break;
        }
        if(n==0){
            printf("THE GIVEN STRINGS ARE EQUAL");
             printf("\n---------------------------------------------------");
        }
if(n==1){
            printf("THE GIVEN STRINGS ARE NOT EQUAL");
             printf("\n---------------------------------------------------");
        }

    }
    char* copy(char* z1,char* z2){
        for(int i=0;z1[i]!='\0';i++){
            z2[i]=z1[i];

        }
            return z2;
    }
    void reverse(char* m1){
         int s=0;
    for(int i=0;m1[i]!='\0';i++){
    s=i;
    }
    char temp[30];
    for (int p=0;p<s;p++){
        temp[p]=m1[s-1-p];
      
    }for (int p=0;p<s;p++){
        m1[p]=temp[p];
      
    }
    printf("THE REVERSED STRING IS:%s",m1);
     printf("\n---------------------------------------------------");
    }
    
int main()
{
    char s[20];
    char ss[20];
    char p[20];
    char c1[20];
    char c2[20];

    printf("ENTER THE STRING:");
    fgets(s, sizeof(s), stdin);
    printf("ENTER THE SUB-STRING:");
    fgets(ss, sizeof(ss), stdin);
    substring(s, ss);
     printf("\nENTER THE STRING TO CHECK THE PALINDROME:");
      fgets(p, sizeof(p), stdin);
    palindrome(p);
     printf("\nENTER THE STRING 1 to be compare:");
      fgets(c1, sizeof(c1), stdin);
       printf("ENTER THE STRING 2 to be compare:");
      fgets(c2, sizeof(c2), stdin);
      compare(c1,c2);
      char z1[30];
      char z2[30];
      printf("\nENTER THE STRING  to  copy:");
      fgets(z1, sizeof(z1), stdin);
      copy(z1,z2);
      printf("THE STRING COPIED IN SECOND STRING IS:%s",z2);
       printf("\n---------------------------------------------------");
       printf("\nENTER THE STRING  to REVERSE:");
       char m1[30];
       fgets(m1, sizeof(m1), stdin);
       reverse(m1);


           

      
    return 0;
}