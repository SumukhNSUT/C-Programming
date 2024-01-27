// https://www.youtube.com/watch?v=irqbmMNs2Bo
// complete c language in one shot
// apna college

// practice question-1
// program to print area of a square
// #include <stdio.h>
// int main()
// {
//     printf("Enter the value of side of square:\n");
//     int side;
//     scanf("%d", &side);

//     printf("The area of sqaure is %d\n", side * side);
//     return 0;
// }

// practice question-2
// program to print area of circle
// #include <stdio.h>
// int main()
// {
//     printf("Enter the value of radius of circle:\n");
//     float radius;
//     scanf("%f", &radius);

//     printf("The area of circle of radius %f is %f\n", radius, 3.14 * radius * radius);
//     return 0;
// }

// practice question-3
// conversion of variables
// #include <stdio.h>
// int main()
// {
//     int a = (int)1.9999;

//     printf("%d", a);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     printf("%d\n", 3 == 4); // here it will print 0 showing false
//     printf("%d\n", 4 == 4); // here it will print 1 showing true

//     return 0;
// }

// practice question-5
// program to check divisibility by 2
// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number\n");
//     scanf("%d", &num);

//     printf("%d", num % 2 == 0);
//     return 0;
// }  

// #include <stdio.h>
// int main()
// {
//     int num1, num2;
//     printf("Hello,Let's do some calculations!\n");

//     printf("Enter first number:\n");
//     scanf("%d", &num1);

//     printf("Enter second number:\n");
//     scanf("%d", &num2);

//     printf("Enter the operator among + , - , * , /\n");
//     char operator;
//     scanf("%c", &operator);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int num1, num2;
//     printf("Hello, Let's do some calculations!\n");

//     printf("Enter first number:\n");
//     scanf("%d", &num1);

//     printf("Enter second number:\n");
//     scanf("%d", &num2);

//     printf("Enter the operator among + , - , * , /\n");
//     char operator;
//     scanf("%c", &operator);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int num1, num2;
//     printf("Hello, Let's do some calculations!\n");

//     printf("Enter first number:\n");
//     scanf("%d", &num1);

//     printf("Enter second number:\n");
//     scanf("%d", &num2);

//     printf("Enter the operator among +, -, *, /\n");
//     char operator;
//     scanf(" %c", &operator); // Add a space before %c to consume whitespace

//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int x = printf("Hello");
//     printf("%d\n", x);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char stars = '*';
//     printf("%c", stars);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int age;
//     printf("enter age\n");
//     scanf("%d", &age);

//     if (age > 18)
//         ;
//     {
//         printf("You are adult\n");
//     }

//     else
//     {
//         printf("you are kid\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int age;
//     printf("enter your age:\n");
//     scanf("%d", &age);

//     switch (age)
//     {
//     case 1:
//         printf("your age is 1\n");
//         break;

//     case 2:
//         printf("your age is 2\n");
//         break;

//     default:
//         printf("your age is neither 1 nor 2 years\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     printf("Enter a number:\n");
//     int num;
//     scanf("%d", &num);

//     if (num > 0)
//     {
//         printf("The number you have entered is %d\n", num);
//         printf("%d is positive\n");

//         if (num % 2 == 0)
//         {
//             printf("The number is even\n");
//         }
//         else
//         {
//             printf("The number is odd\n");
//         }
//     }
//     else if (num == 0)
//     {
//         printf("The number is neither positive nor negative , it is 0");
//     }
//     else
//     {
//         printf("The number is negative\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char ch;
//     printf("enter character of english language:\n");
//     scanf("%c", &ch);

//     if (ch >= 'A' && ch <= 'Z')
//     {
//         printf("Upper case\n");
//     }
//     else if (ch >= 'a' && ch <= 'z')
//     {
//         printf("Lower case");
//     }
//     else
//     {
//         printf("Not a character of english language\n");
//     }

//     return 0;
// }
/* THIS WAS BASED ON ASCII VALUE OF LETTERS , WE CAN HOVER OVER DIFFERENT VALUES TO SEE THEIR
ASCII VALUES THAT ARE IN TERMS OF INT */

// #include<stdio.h>
// int main()
// {
//     printf("enter number:\n");
//     int n;
//     scanf("%d", &n);

//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         sum = sum + i;
//     }

//     printf("%d", sum);
//     return 0;
// }

// #include<stdio.h>

// int main()
// {
//     int a, digit, sum = 0;

//     printf("Enter the number you want the to check the divisibility of:\n");
//     scanf("%d", &a);

//     for (int i = a; i > 0; i = i / 10)
//     {

//         digit = i % 10;
//         sum = sum + digit;
//     }
//     if(sum % 3 == 0){
//         printf("Number is divisble by 3");
//     }
//     else{
//         printf("Number is not divisible by 3");
//     }

//     return 0;

// }

// #include <stdio.h>
// int main()
// {
//     int a;
//     a = 1;
//     int b=7;

//     b = b + a;
//     printf("%d", b);
// }

// #include <stdio.h>
// int main()
// {
//     printf("Enter a number\n");
//     int n;
//     scanf("%d", &n);

//     int sum = 0;

//     for (int i = 0; i <= n; i++)
//     {
//         sum = sum + i;

//     }
//     printf("%d", sum);
// }

// #include <stdio.h>
// int main()
// {
//     // keep taking numbers from user until user enters an odd number
//     printf("Enter an odd number:\n");

//     int num;

//     do
//     {
//         scanf("%d", &num);
//         printf("The number is odd\n");

//     } while (num % 2 == 0);
// }

// #include <stdio.h>

// int sum(int a, int b)
// {
//     return a + b;
// }

// int main(int argc, char const *argv[])
// {
//     int x = sum(10, 15);
//     printf("%d", x);

//     return 0;
// }

// #include <stdio.h>

// void printHW()
// {
//     printf("Hello World\n");
// }

// int main()
// {
//     printHW();

//     return 0;
// }

// #include <stdio.h>
// #define pi 3.14
// int main(int argc, char const *argv[])
// {

//     printf("%f", pi);
//     return 0;
// }

// #include <stdio.h>

// void Hello()
// {
//     printf("Hello\n");
// }

// void goodBye()
// {
//     printf("GoodBye\n");
// }
// int main()
// {
//     Hello();
//     goodBye();

//     return 0;
// }

// #include <stdio.h>

// void printNamaste()
// {
//     printf("Namaste\n");
// }

// void printBonjour()
// {
//     printf("Bonjour\n");
// }
// int main(int argc, char const *argv[])
// {
//     printf("You are indian or french?\n");
//     printf("Type 1 for Indian and 2 for French.\n"); // x = 1 or 2

//     int x;
//     scanf("%d", &x);

//     if (x == 1)
//     {
//         printNamaste();
//     }
//     else
//     {
//         printBonjour();
//     }

//     return 0;
// }

// make a function to print table of a number upto which user inputs ( both inputs from user )
// table of what and upto what
// make sure to use functions
// #include <stdio.h>
// void printTable()
// {
//     printf("Enter the number:\n");
//     int num;
//     scanf("%d", &num);

//     printf("Upto which you want table to be printed?\n");
//     int x;
//     scanf("%d", &x);

//     printf("The table is:\n");
//     for (int i = 0; i <= x; i++)
//     {
//         printf("%d * %d = %d\n", num, i, num * i);
//     }
// }

// int main(int argc, char const *argv[])
// {
//     printTable();
//     return 0;
// }

// #include <stdio.h>

// void printTable()
// {
//     while (1) // Infinite loop
//     {
//         printf("Enter the number (or press 'q' to quit):\n");
//         int num;
//         char choice;           // Character to store user's choice
//         scanf(" %c", &choice); // Note the space before %c to skip leading whitespace

//         if (choice == 'q' || choice == 'Q')
//         {
//             printf("Exiting...\n");
//             break; // Exit the loop if 'q' is entered
//         }

//         // If the user didn't quit, continue with table generation
//         scanf("%d", &num);

//         printf("Upto which you want table to be printed?\n");
//         int x;
//         scanf("%d", &x);

//         printf("The table is:\n");
//         for (int i = 0; i <= x; i++)
//         {
//             printf("%d * %d = %d\n", num, i, num * i);
//         }
//     }
// }

// int main()
// {
//     printTable(); // Call the function to print tables
//     return 0;
// }

// #include <stdio.h>

// void printTable()
// {
//     printf("Enter the number:\n");
//     int num;
//     scanf("%d", &num);

//     printf("Upto which you want table to be printed?\n");
//     int x;
//     scanf("%d", &x);

//     printf("The table is:\n");
//     for (int i = 1; i <= x; i++)
//     {
//         printf("%d * %d = %d\n", num, i, num * i);
//     }
// }

// int main()
// {
//     int choice;
//     do
//     {
//         printTable();
//         printf("Enter 0 if you want to exit or any other number to rerun:\n");
//         scanf("%d", &choice);
//     } while (choice != 0);

//     return 0;
// }

// #include <stdio.h>

// void makePalindrome()
// {
//     printf("Enter a whole number:\n");
//     int num;
//     scanf("%d", &num);

//     for (int i = num; i > 0; i / 10)
//     {
//         printf("%d", i);
//     }
// }
// int main(int argc, char const *argv[])
// {
//     printf("The palindrome will be:\n");
//     makePalindrome();
//     return 0;
// }

// #include<stdio.h>

// void makePalindrome(){
//     printf("Enter a whole number:\n");
//     int num;
//     scanf("%d", &num);

//     for (int i = 0; i <= num; i/10)
//     {
//         printf("%d", i);
//     }
// }
// int main(int argc, char const *argv[])
// {
//     printf("The palindrome will be:\n");
//     makePalindrome();
//     return 0;
// }

// #include <stdio.h>

// int sum(int a, int b)
// {
//     int sum = a + b;
//     return sum;
// }

// int main(int argc, char const *argv[])
// {
//     printf("%d", sum(23, 45));

//     return 0;
// }

// #include <stdio.h>

// void makeReverse();

// int main()
// {
//     makeReverse();

//     return 0;
// }

// void makeReverse()
// {
//     {
//         printf("Enter a whole number:\n");
//         int num, reverse = 0, digit;
//         scanf("%d", &num);

//         for (int i = num; i > 0; i = i / 10)
//         {
//             digit = i % 10;
//             reverse = reverse * 10 + digit;
//         }
//         printf("The reverse will be:\n");
//         printf("%d", reverse);
//     }
// }

// #include<stdio.h>

// void printReverse()
// {
//     printf("Enter a whole number:\n");
//     int num;
//     scanf("%d", &num);

//     for (int i = num; i > 0; i = i/10)
//     {
//         int digit;
//         digit = i % 10;
//         printf("%d", digit);
//     }
// }
// int main(int argc, char const *argv[])
// {
//     printReverse();
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter the number:\n");
//     scanf("%d", &num);

//     for (int i = num; i > 0; i = i / 10)
//     {
//         int digit = i % 10;
//         int reverse = digit;
//         if (reverse == digit)
//         {
//             printf("The number is palindrome\n");
//         }
//     }

//     return 0;
// }

// #include <stdio.h>

// int PrintFactorial(int num)
// {

//     for (int i = 0; i <= num; i++)
//     {
//         int x = i * factorial(num - 1);
//         printf("%d", x);
//     }
// }
// int main(int argc, char const *argv[])
// {
//     int x;
//     printf("Enter a number:\n");

//     scanf("%d", &x);
//     PrintFactorial(x);
//     return 0;
// }

// #include <stdio.h>

// int CalculateFactorial(int num)
// {
//     int factorial = 1; // Initialize the factorial to 1

//     for (int i = 1; i <= num; i++)
//     {
//         factorial = factorial * i; // Update the factorial by multiplying with i
//     }

//     return factorial; // Return the calculated factorial
// }

// int main(int argc, char const *argv[])
// {
//     int x;
//     printf("Enter a number:\n");

//     scanf("%d", &x);
//     int result = CalculateFactorial(x); // Call the function and store the result

//     printf("Factorial of %d is %d\n", x, result); // Print the result
//     return 0;
// }

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int num, factorial = 1;
//     printf("Enter a number:\n");
//     scanf("%d", &num);

//     for (int i = 1; i <= num; i++)
//     {
//         factorial = factorial * i;
//         printf("%d", factorial);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int num;
//     long long factorial = 1;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     if (num < 0)
//     {
//         printf("Factorial is not defined for negative numbers.\n");
//     }
//     else
//     {
//         for (int i = 1; i <= num; i++)
//         {
//             factorial = factorial * i;
//         }
//         printf("Factorial of %d is %lld\n", num, factorial);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int num, reversed = 0, remainder;

//     // Input a number from the user
//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     while (num != 0) {
//         remainder = num % 10;
//         reversed = reversed * 10 + remainder;
//         num /= 10;
//     }

//     printf("Reversed number: %d\n", reversed);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num, remainder, reversedNum = 0;
//     printf("Enter a number:\n");
//     scanf("%d", &num);

//     do
//     {
//         remainder = num % 10;
//         reversedNum = reversedNum * 10 + remainder;
//         printf("%d", reversedNum);

//         num = num / 10;

//     } while (num != 0);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num, remainder, reversedNum = 0;
//     printf("Enter a number:\n");
//     scanf("%d", &num);

//     do
//     {
//         remainder = num % 10;
//         reversedNum = reversedNum * 10 + remainder;
//         num = num / 10;

//     } while (num != 0);

//     printf("Reversed number: %d\n", reversedNum);

//     return 0;
// }

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     printf("Hello World!\n");
//     return 0;
// }

// #include <stdio.h>

// void ironMan()
// {
//     printf("aaj iron man 3 nhi dekhenge\n");
// }
// int main(int argc, char const *argv[])
// {
//     ironMan();
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number\n");
//     scanf("%d", &num);

//     do
//     {
//         printf("Enter again\n");
//         scanf("%d", &num);
//     } while (num != 5);

//     return 0;
// }

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int num;
//     printf("Enter a number:\n");
//     scanf("%d", &num);

//     while (num != 0)
//     {
//         printf("Enter again\n");
//         scanf("%d", &num);
//     }

//     return 0;
// }

// #include <stdio.h>

// int sum(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }

//     else
//     {
//         int SumNm1 = sum(n - 1);
//         int SumN = SumNm1 + n;
//         return SumNm1;
//     }
// }

// int main()
// {
//     printf("Enter the value of n :\n");
//     int n;
//     scanf("%d", &n);
//     printf("Sum of first %d natural numbers is %d", n, sum(n));
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

// // Pointers : A variable that stores the memory address of another variable

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int age = 22;
//     int *ptr = &age; // declaring a pointer *ptr which stores address of variable age
//     int _age = *ptr; // & sign before age means address of variable age
//                      // * means value and & means address
//     printf("%d\n", _age);
//     printf("%p\n", &age);
//     printf("%p\n", ptr);
//     printf("%p\n", &ptr);
//     printf("%d\n", *ptr);
//     printf("%d\n", *(&age));

//     return 0;
// }

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int x = 1;
//     // considering a pointer *y

//     int *y = &x;
//     printf("%p\n", *y);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     printf("Hello world\n");
//     return 0;

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     printf("Sanskar\n");
//     return 0;
// }
 