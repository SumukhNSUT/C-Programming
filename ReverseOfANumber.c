#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("Enter a number:\n");
    int num, reversedNum = 0;
    scanf("%d", &num);

    while (num > 0)
    {
        int remainder;
        remainder = num % 10;
        num = num / 10;

        reversedNum = reversedNum * 10 + remainder; // important step
    }

    printf("%d", reversedNum);

    return 0;
}
