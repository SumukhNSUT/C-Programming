// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     char name[] = {'S', 'u', 'm', 'u', 'k', 'h', '\0'};
//     // other form of same
//     char name1[] = "Sumukh";

//     printf("%s\n", name);
//     printf("%s\n", name1);

//     char apple[20], apple1[20];
//     gets(apple);
//     scanf("[^\n]%s", apple1);
//     printf("%s\n", apple);
//     printf("%s\n", apple1);

//     return 0;
// }

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     char name[6];
//     gets(name);
//     // gets is same as scanf
//     printf("Your name is %s\n", name);
//     // puts is same as printf
//     puts(name);

//     return 0;
// }

// standard libarary functions in C ( in strigs )
// #include <stdio.h>  // functions like printf , scanf etc.
// #include <string.h> // to import strlen() function ( library function ) and others
// #include <math.h>   // to import various mathematical operations like pow(n,m)=n^m

// int main(int argc, char const *argv[])
// {
//     char name[] = "Sumukh";
//     // printf("%d\n", strlen(name)); // strlen return unsigned long , so we use %lu
//     printf("%lu\n", strlen(name));

//     // other way if we want to use %d
//     int length = strlen(name);
//     printf("%d\n", length);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main(int argc, char const *argv[])
// {
//     char str1[] = "string1";
//     char str2[] = "string2";

//     strcpy(str1, str2);
//     puts(str1);
//     printf("%s\n", str1); // using printf in place of puts
//     // here str2 gets copied to str1
//     // 2nd written string ( here str 2 ) gets copied to 1st written ( here str1 )
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main(int argc, char const *argv[])
// {
//     char firstName[100] = "Sumukh"; /* if we don't write 100 or any number larger than the
//     array size of combined firstName and lastName , firstName don't has enough space
//     to contain lastName */
//     char lastName[] = "Bansal";

//     printf("%s", strcat(firstName, lastName));
//     return 0;
// }
// we can also use other library functions of string.h like strcpm()
