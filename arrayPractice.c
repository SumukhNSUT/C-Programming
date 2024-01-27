// PRACTICE QUESTIONS BASED ON ARRAYS FROM APNA COLLEGE ( C IN ONE SHOT )

// function to count number of odd numbers in an array
// #include <stdio.h>

// int countOdd(int arr[], int totalNum);

// int main(int argc, char const *argv[])
// {
//     printf("How many numbers you want to enter?\n");

//     int totalNum;
//     scanf("%d", &totalNum);

//     return 0;
// }
// int countOdd(int arr[], int totalNum)
// {
//     arr[totalNum];
//     printf("Enter numbers:\n");
//     scanf("%d", arr[totalNum]);
//     for (int i = 0; i <= totalNum; i++)
//     {
//         if (i % 2 == 0)
//         {
//             printf("%d\n", i);
//         }
//     }
// }
// #include <stdio.h>

// void countOdd(int arr[], int totalNum);

// int main(int argc, char const *argv[])
// {
//     printf("How many numbers you want to enter?\n");

//     int totalNum;
//     scanf("%d", &totalNum);

//     int numbers[totalNum];

//     countOdd(numbers, totalNum);

//     return 0;
// }

// void countOdd(int arr[], int totalNum)
// {
//     printf("Enter numbers:\n");

//     for (int i = 0; i < totalNum; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     printf("Odd numbers:\n");
//     for (int i = 0; i < totalNum; i++)
//     {
//         if (arr[i] % 2 != 0)
//         {
//             printf("%d\n", arr[i]);
//         }
//     }
// }

// #include <stdio.h>

// int countOdd(int arr[], int n);

// int main(int argc, char const *argv[])
// {
//     // int arr[] = {1, 2, 3, 4, 5, 6};
//     int arr[6];
//     arr[0] = 1;
//     arr[1] = 2;
//     arr[2] = 3;
//     arr[3] = 4;
//     arr[4] = 5;
//     arr[5] = 6;
//     printf("%d", countOdd(arr, 6));

//     return 0;
// }

// int countOdd(int arr[], int n)
// {
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] % 2 != 0)
//         {
//             count++;
//         }
//     }
//     return count;
// }