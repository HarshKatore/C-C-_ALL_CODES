 /*if division done betn int int then int,if single one is float then float,here 54 is converted to float first
 implesit tc is by compiler itself
 explesit is by coder
 here explesit
 implesit :int>short so it becomes int or %d
 #include<stdio.h> 
int main() 
{ 
	short a=10; 
	int b;
	b=a; 
	printf("%d\n",a); 
	printf("%d\n",b); 

} 

  */

 #include <stdio.h>

int main()
{

	int a = 3;

	float b= (float)54/5;
	printf("The Value of a is %f\n", b );
	return 0;

}
