// by using loop
#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("Enter a number:\n");
    int num, factorial = 1;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        factorial = factorial * i; // important step
    }
    printf("The factorial will be : %d\n", factorial);
    return 0;
}

// by using recursion
// #include <stdio.h>

// int fact(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         int factNm1 = fact(n - 1);
//         int factN = factNm1 * n;
//         return factN;
//     }
// }
// int main()
// {
//     int n;
//     printf("Enter a number:\n");
//     scanf("%d", &n);
//     printf("Factorial of %d is %d\n", n, fact(n));
//     return 0;
// }

// #include <stdio.h>

// int fact(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }

//     else
//     {

//         return fact(n - 1) * n;
//     }
// }
// int main(int argc, char const *argv[])
// {
//     printf("Enter the number you want factorial of:\n");
//     int num;
//     scanf("%d", &num);

//     printf("The factorial will be %d", fact(num));
//     return 0;
// }
