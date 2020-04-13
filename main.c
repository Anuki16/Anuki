#include <stdio.h>
#include <stdlib.h>
#include "headerfile.h"
#include <ctype.h>
#include <string.h>
#include <math.h>

/*This
is a
comment*/
//strcpy : change string in array



void passByValue(int i){  //only changes value inside function. Doesn't affect the variable passed in.

    i=100;

}
void passByAddress(int *i){ //pass in a pointer to a memory address. changes the value of that address.
    *i=53;   //dereference the pointer to get the value and change it

}

int main()
{
    int i=20;
    passByValue(i);
    printf("i = %d\n",i);

    passByAddress(&i);  //pass in the memory address of i
    printf("i = %d\n",i);


    return 0;
}
