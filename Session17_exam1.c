
#include <stdio.h>
void main()
{
    char name[20];
    puts("Enter your name:");
    fgets(name, 20 , stdin);
    puts("Hi there:");
    puts(name); 
}
