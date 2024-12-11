/* the distance betn coordinates point is calculate and area od radius as distance is calculated
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float Edistance(int x1, int y1, int x2, int y2)
{
    int a = (y2-y1)*(y2-y1)+(x2-x1)*(x2-x1);
    return sqrt(a);
}
float areaOfCircle(float d)
{
    return 3.14*d*d ;
}

int main()
{
    int x1, y1, x2, y2;
    float dst;
    // Take x1, y1 and x2, y2 from the user using scanf
    printf("Enter the value of x1\n");
    scanf("%d", &x1);

    printf("Enter the value of y1\n");
    scanf("%d", &y1);

    printf("Enter the value of x2\n");
    scanf("%d", &x2);

    printf("Enter the value of y2\n");
    scanf("%d", &y2);
   float d; 
    d= Edistance(x1,y1,x2,y2) ; 
    printf("The distance is %.2f\n",d);
    dst = areaOfCircle ( d);
    printf("The area is %.2f\n", dst);
    return 0;
}
