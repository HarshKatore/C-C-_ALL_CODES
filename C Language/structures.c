/*
user defined data type which store data of multiple type 
*/

#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} harry, ravi, shubham;
// struct Student harry, ravi, shubham;   can be done seperately and this will be a global declaration can be used in any function


void print()
{
    printf("%s", harry.name);
}

int main()
{  //struct student harry ,ravi,shubham;
    harry.id = 1;
    ravi.id = 2;
    shubham.id = 3;


    harry.marks = 66;
    ravi.marks = 466;
    shubham.marks = 46;


    harry.fav_char = 'p';
    ravi.fav_char = 'y';
    shubham.fav_char = 'o';


    strcpy(harry.name, "Harry Potter student of the year");
    strcpy(shubham.name, "Shubham Kumar");

     printf("Harry got %d marks\n", harry.marks);
     printf("Harry's name is: %s\n", harry.name);
     printf("Shubham got %d marks\n", shubham.marks);
     printf("Shubham's name is: %s\n", shubham.name);
    print();
    

    return 0;
}
