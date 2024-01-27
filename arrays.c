// IN CASE OF A 2-D ARRAYS , ASSUME IT IN FORM OF A MATRIX AND IT IS DONE ROW BY COLUMN
// IF AN ARRAYS IS marks[2][3] , THEN IT MEANS THAT WE HAVE A MATRIX OF TWO ROWS AND 3 COLUMNS
// IT IS MADE LIKE : - - - {elements will be (0,0),(0,1),(0,2)}
//                   - - - {elements will be (1,0),(1,1),(1,2)}

// Other way to represent a 2-d array
// int array[3][3] = {
//     {1, 2, 3},
//     {4, 5, 6},
//     {7, 8, 9}
// };

// REFER APNA COLLEGE ( C IN ONE SHOT ) FOR BETTER EXPLANATION

// arrays in C
// array is collection of similar data types stored at contiguous memory locations

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int marks1 = 97;
//     int marks2 = 98;
//     int marks3 = 99;

//     int marks[] = {97, 98, 99};

//     printf("%d\n", marks[0]);
//     printf("%d\n", marks[1]);
//     printf("%d\n", marks[2]);
//     return 0;
// }

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int price[3]; // p1 = price 1 , p2 = price 2 , p3 = price 3

//     printf("Enter p1 of item 1:\n");
//     scanf("%d", &price[0]);

//     printf("Enter p2 of item 2:\n");
//     scanf("%d", &price[1]);

//     printf("Enter p3 of item 3:\n");
//     scanf("%d", &price[2]);

//     printf("price of p1 = %d\n", price[0]);
//     printf("price of p2 = %d\n", price[1]);
//     printf("price of p3 = %d\n", price[2]);

//     return 0;
// }

// INCREMENT AND DECREMENT IN POINTERS
// REFER APNA COLLEGE ( C IN ONE SHOT ) FOR EXPLANATION
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int age = 22;
//     int *ptr;
//     ptr = &age;
//     ptr++;

//     printf("%d", *ptr);
//     return 0;
// }

// // MULTIDIMENSIONAL ARRAYS
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int arr[2][2] = {{1, 2}, {3, 4}};

//     printf("%d\n", arr[0][0]); // assume like a matrix
//     printf("%d\n", arr[0][1]);
//     printf("%d\n", arr[1][0]);
//     printf("%d\n", arr[1][1]);

//     return 0;
// }

// // STORING MARKS OF A STUDENT OF THREE SUBJECTS

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int sub1, sub2, sub3;

//     printf("Enter marks of student for subject 1 = ");
//     scanf("%d", &sub1);
//     printf("Enter marks of student for subject 2 = ");
//     scanf("%d", &sub2);
//     printf("Enter marks of student for subject 3 = ");
//     scanf("%d", &sub3);

//     int std1[3] = {sub1, sub2, sub3};

//     return 0;
// }

// #include <stdio.h>
// // 2-d array
// int main(int argc, char const *argv[])
// {
//     int marks[2][3];

//     marks[0][0] = 100;
//     marks[0][1] = 99;
//     marks[0][2] = 98;

//     marks[1][0] = 97;
//     marks[1][1] = 96;
//     marks[1][2] = 95;

//     return 0;
// }
// // IT CREATED AN ARRAY LIKE :
// // 100 99 98
// // 97 96 95
// // MATRIX OF TWO ROWS AND 3 COLUMNS
