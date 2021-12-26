/* 
 * Sum of numbers from 1 to n.
 * Parameterised Recursion.
 */

#include <stdio.h>

void parameterised_recursion(int num, int sum)
{
    if (num < 1) {
        printf("%d\n", sum);
        return;
    }
    parameterised_recursion(num - 1, sum + num);
}

int main()
{
    int num = 0;
    
    printf("Enter the number:\n");
    scanf("%d", &num);
    
    printf("Output:\n");
    parameterised_recursion(num, 0);
    return 0;
}
