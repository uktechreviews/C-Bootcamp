#include <stdio.h>

int main() {
    int year_of_birth = 1975;
    int current_year = 2023;

    printf ("%d \n", year_of_birth);
    printf ("%d \n", current_year);

    char name[50] = "Spencer";
    printf ("My name is %s \n", name);

    int age;

    age = current_year - year_of_birth;

    printf("%s My name is \n", name);

    printf("%s is currently ", name);
    printf("%d years old.",age);

    printf("\n");

    printf("%s is currently %d years old.", name, age);


    return 0;
}

