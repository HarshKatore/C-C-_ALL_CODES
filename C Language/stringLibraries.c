#include <string.h>
#include <stdio.h>

int main()
{
    char s1[] = "harry";
    char s2[] = "ravi";
    char s3[54];
    printf("The strcmp for s1, s2 returned %d \n", strcmp(s1, s2));
    printf("The concatened string s1 s2 is: ");
    puts(strcat(s1, s2));
    printf("The length of s1 is %d\n", strlen(s1));

    printf("The reversed string s1 is: ");
    puts(strrev(s1));

    strcpy(s3, s2);
    puts(s3);

    return 0;
}
