#include <stdio.h>

int main() {

    int age; 
    int *age_address = &age; // * declares a pointer variable and sets is to the memory address of age using &
    char name[50];
    
    printf ("Please enter your name (Max 50 characters) ");
    scanf("%s", name);

    printf ("Please enter your age ");
    scanf("%d", &age);      // The & tells it is a memory address

    printf ("Your name is %s and you are %d years old \n", name, age);
    printf ("Your name is %s and you are %d years old \n", name, *age_address); // *age_address retruns the value stored at that memory address

    printf ("age is stored at %p\n",&age); // this gives the memory address and then use &
    printf ("age is stored at %p\n",age_address); // this gives the memory address
    printf ("name is stored at %p\n",name); // this gives the memory address and then use &

    printf ("%c \n",*(name+1)); // This would return the second character of the array that stores the string

    // Rather than changing the variable itself actually change whats in the memory address

    *(name+1) = 'X';  // use single quotations for characters or use name[1] = 'X'

    printf ("%s \n", name);



    return 0;

}