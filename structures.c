// #include <stdio.h>
// #include <math.h>
// #include <string.h>

// struct student
// {
//     char name[100]; // since name is a string , so declaring as an array
//     // if name was single character , then we could write char name = 'a';
//     // here no need to declare an array
//     int rollNum;
//     float cgpa;
// };

// int main(int argc, char const *argv[])
// {
//     struct student s1;
//     strcpy(s1.name, "Sumukh"); // since name is a string , we can't do directly
//     s1.rollNum = 67;
//     s1.cgpa = 9.5;

//     printf("name is = %s\n", s1.name);
//     printf("roll number is = %d\n", s1.rollNum);
//     printf("cgpa is = %f\n", s1.cgpa);

//     struct student s2;
//     strcpy(s2.name, "Sumukh2"); // since name is a string , we can't do directly
//     s1.rollNum = 68;
//     s1.cgpa = 9;

//     printf("name is = %s\n", s2.name);
//     printf("roll number is = %d\n", s2.rollNum);
//     printf("cgpa is = %f\n", s2.cgpa);

//     return 0;
// }

// shorter way to define and access a structure
// #include <stdio.h>
// #include <string.h>

// struct student
// {
//     int rollNum;
//     float cgpa;
// };
// int main(int argc, char const *argv[])
// {
//     struct student s1 = {67, 9.1}; // same order of values as while declaring struct student

//     return 0;
// }
