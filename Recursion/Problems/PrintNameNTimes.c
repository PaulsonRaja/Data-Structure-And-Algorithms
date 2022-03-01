/* 
 * Print name n times using recursion.
 */

#include <stdio.h>
#define SIZE 50

void print_name(const char *name, int count)
{
    if (count == 0)
        return;
    printf("%s\n", name);
    print_name(name, count - 1);
}


int main()
{
    char name[SIZE];
    int count = 0;
    
    printf("Enter the name:\n");
    scanf("%s", name);
    printf("Enter the number of times you want to print the name:\n");
    scanf("%d", &count);
    
    print_name(name, count);
    return 0;
}
