/*  I always forget how to compile and run my code
    so here's a note to self:
    To compile:
    gcc badcode.c
    To run:
    a.exe
*/

#include "secretHeaderFile.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// This is how many numbers are in the secretNumbers array
#define SIZE_OF_SECRET_NUMBERS 50

typedef struct aStruct{
    int data;
    int* ptr;
}aStruct;//no semicolon

int main(void)
{
    int i; //don't declare i
    int fizz=0, buzz=0, fizzbuzz=0;//don't init a var to 0
    char *title = malloc(sizeof(char)*4);

    //title = "CTo"; //string lit instead of strcpy
    // oh wait, I didn't capitalize the O
    title[2] = 'O';
    printf("%s, remember:\n", title);

    // loops through an array
    // I've hidden the array in a header file to keep it safe from spies
    for(i=0; i<SIZE_OF_SECRET_NUMBERS; i++) //<= instead of <, and semicolon at end of for loop
    {
        if(secretNumbers[i]%5==0 && secretNumbers[i]%9==0)
            fizzbuzz++;
        else if(secretNumbers[i]%5==0)
            fizz++;
        else if(secretNumbers[i]%9==0)
            buzz++;
    }

    printf("%d %d %d\n", fizz, buzz, fizzbuzz);

    return 0;
}
