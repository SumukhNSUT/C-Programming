// Pointers : A variable that stores the memory address of another variable

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
// int main(int argc, char const *argv[])
// {
//     int x = 22;
//     int *y = &x;

//     printf("%d\n", x);
//     printf("%p\n", &x); // we can use %p while printing address to avoid warning
//                         // we use %d so that it is in better format
//     printf("%p\n", y);
//     printf("%d\n", *y);

//     return 0;
// }

// SOME PART OF POINTERS TOPIC IS LEFT , COVER IT FROM APNA COLLEGE (C IN ONE SHOT)