#include <stdio.h>

int main()
{
   
    int i, age;
    for (i=0; i<10; i++){
        printf("%d\nEnter your age\n", i);
        scanf("%d", &age);
     if (age>10)
     {
         break; //ends loop
        }
        
        printf("we have not come accross any break statements");
       
        
    }
    
    return 0;
}

