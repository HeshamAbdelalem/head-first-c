#include <stdio.h>

int main(void){
int num = 99;

int *p = &num;  // Assing [p] as a pointer to the [num] address

//this will print the [p] address Not the address that p points to.
printf("The [p] will print the memory address of num : %p\n", &p);
//this will print the address that [p] points to.
printf("The [p] will print the memory address OF p : %p\n", p);

printf("The [p] will print the memory address : %p\n", &num);


// here i can access the value of the pointer that [p] points too 
// so [p] will print the address and [*p] will print the value of that address

printf("The [*p] will print the memory address : %i\n", *p);

// this will change the value of the pointers that p points too
// so num value will be 50 and p also
*p = 50;

printf("I changed the value of [p] will print the memory address : %i\n", *p);


return (0);
}