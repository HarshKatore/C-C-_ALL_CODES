/* UNION IS SAME AS STRUCTURE ONLY DIFFERENCE IS THAT IT RUNS ONLY ONE VARIABLE AT A TIME ANT MEMORY IS 
USED BY ALL VARIABLE ONE BY ONE AND  MEMORY OF SIZE OF LARGEST DATA TYPE RESERVED  BOTH HAVE RESPECTIVE USE  
*/
#include <stdio.h>
#include <string.h>
union Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};
int main()
{
   union Student s1;   //HERE IT IS LOCAL VARIABLE OF MAIN FUNCTION
    strcpy(s1.name, "Harry");
    s1.fav_char = 'u';
    s1.marks = 45;
    s1.id = 1;

    printf("The id is %d \n", s1.id);
    printf("The marks is %d \n", s1.marks);       // ONLY ONE WILL GIVE RIGHT ANSWER OTHER GIVE GARBAGE VALUES
    printf("The fav_char is %c \n", s1.fav_char);
    printf("The name is %s \n", s1.name);
    

    
    return 0;
}
