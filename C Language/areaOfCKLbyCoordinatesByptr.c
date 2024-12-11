#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float Edistance(int x1, int y1, int x2, int y2)
{
    int a = (y2-y1)*(y2-y1)+(x2-x1)*(x2-x1);
    return sqrt(a);
}

float areaOfCircle(int x1, int y1, int x2, int y2, float (*distance)(int x1, int y1, int x2, int y2))
{
    return distance(x1, y1 ,x2 ,y2) * distance(x1, y1 ,x2 ,y2) * 3.14;
}

int main()
{
    int x1, y1, x2, y2;
    float dst;
    // Take x1, y1 and x2, y2 from the user using scanf
    printf("Enter the value of x1\n");
    scanf("%d", &x1);

    printf("Enter the value of x1\n");
    scanf("%d", &y1);

    printf("Enter the value of x1\n");
    scanf("%d", &x2);

    printf("Enter the value of x1\n");
    scanf("%d", &y2);
    float (*q)(int, int ,int, int);            //first is op data type and afterwords are type of inputs of function to which it points
    q=Edistance;                                  //()to pointer name is needed otherwise it will be a function
    dst = areaOfCircle( x1 ,y1 ,x2 ,y2, q);
    printf("The area is %.2f\n", dst);
    return 0;
}
//basically used when have to use one function in other