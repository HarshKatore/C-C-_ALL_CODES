/* in any task if curley braces are available but if we do not use then give semicolon eg else,function ceclair but no defination
void is used if no return value
argument no && return value
sum=yy
printstar=yn
takenumber=ny
star=nn

*/


#include <stdio.h>
		int sum(int a, int b){
			 return a + b;

		}


		void printstar(int n)
{
    for(int i = 0; i < n; i++)
    {
         printf("%c", '*');
    } 
}


		int takenumber()
{
    int i;
    printf("Enter a number");
    scanf("%d", &i);
    return i;
}



		void star(){
			 printf("%c", '*');
		}
int main()
{
    int a, b, c;
    a = 9;
    b = 87;
     c = sum(a, b);
	printf ("sum=%d\n",c);

	int n;
	printf("enter no of start\n");
	scanf("%d",&n);
     printstar(n);



    c = takenumber();
    printf("The number entered is %d ", c);


	int p; 
	printf("Enter how many stars(*) you want : \n"); /* In this both declaration and definition of function are done together.*/ 
	scanf("%d", &p); 
	for (int i = 0; i<p; i++) 
	{
		star();
	} 
    return 0;
}


