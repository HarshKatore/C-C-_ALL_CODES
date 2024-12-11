    /* int *a, b;   give error a can store address but b will be integer  so int* istypedef so
     that multiple variables can be initialised in pointer
    syntex:   typedef existing_data_type  new;
    typedef int* intPointer;
    intPointer a, b;
    int c = 89;
    a = &c;
    b = &c;
  eg.  typedef int i;
  NEW AND OLD BOTH CAN BE USED 

    */



#include <stdio.h>

typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} std;                         //std is another name of student

int main()
{

    std s1, s2;
    s1.id = 56;
    s2.id = 89;
    printf("Value of s1's Id is %d\n", s1.id);
    printf("Value of s2's Id is %d\n", s2.id);


    return 0;
}
