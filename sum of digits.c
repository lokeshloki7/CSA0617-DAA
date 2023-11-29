#include <stdio.h>
#include <string.h>
 
int sum(char *str)
{
    int sum = 0;
    size_t i;
    size_t l = strlen(str);
    for (i = 0; i < l; i++) 
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            sum = sum + (str[i] - '0');
        }
    }
    return sum;
}
int main(void)
{
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);
    printf("The sum of digits of numbers in the string is: %d", sum(str));
    return 0;
}
