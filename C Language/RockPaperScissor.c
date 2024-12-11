#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int Random(int n)
{
    srand(time(NULL));
    return rand () % n;
}

int main(){
    int a,b,x=0,y=0;
    char arr[4]={'r','p','s','\0'};
printf("wELCOME TO ROCK, PAPER &SCISSOR GAME BY HARSH\n");
for (int i = 0; i < 3; i++)
{    printf("your turn:\n");
    printf("enter 1 for rock 2 for paper 3 for scissor\n");
    scanf("%d",&a);
    printf("you have entered %c\n",arr[a-1]);
   printf(" computers turn\n");
    printf("enter 1 for rock 2 for paper 3 for scissor\n");
     b=Random(3)  +1;                                                    //random selects any numb less than entered one
      printf("computer  have entered %c\n",arr[b-1]);
     
 if(a==1 &&b==1 ){
     printf(" its a tie \n");
    
}
 if(a== 2&&b==2 ){
    printf("its a tie \n");
}
 if(a==3 &&b== 3){
    printf(" its a tie\n ");
}
 if(a==1 &&b==2 ){
    printf(" computer wins\n ");
    y++;
}
 if(a==2 &&b==1 ){
    printf(" you win\n");
    x++;
 }     
 if(a==1 &&b==3 ){
    printf(" you win\n");
    x++;
}
 if(a==3 &&b==1 ){
    printf(" computer win\n");
    y++;
}
 if(a==2 &&b==3 ){
    printf(" computer win\n");
    y++;
}
 if(a==3 &&b==2 ){
    printf("you win \n");
    x++;
}
printf("score:you= %d&computer=%d\n",x,y);
}
if(x<y){
  printf(" computer win the 3 match series\n");   
}
else if(x>y){
     printf(" you win the three match series\n");

}
else{
    printf("three match tournament has been tied\n");
}
return 0;
}