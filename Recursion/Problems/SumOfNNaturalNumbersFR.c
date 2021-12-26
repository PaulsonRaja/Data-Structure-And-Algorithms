/* 
 * Sum of numbers from 1 to n.
 * Functional Recursion.
 */

#include <stdio.h>

int functional_recursion(int num)
{
    if (num == 0)
        return 0;
    return num + functional_recursion(num - 1);
}

int main()
{
    int num = 0;
    int res = 0;
    
    printf("Enter the number:\n");
    scanf("%d", &num);
    
    printf("Sum: ");
    res = functional_recursion(num);
    printf("%d\n", res);
    return 0;
}
