/*  I always forget how to compile and run my code
    so here's a note to self:
    To compile:
    gcc badcode.c
    To run:
    a.exe
*/

#include "badcode.h"
#include <stdlib.h>

#define FALSE 1

typedef struct aStruct{
    int data;
    int* ptr;
}aStruct;

int main(void)
{
    int i; // error: i undeclared
    int num = 10;
    int sum = 0;

    aStruct myStruct;
    myStruct.data = 27;

    for (i=0; i<num; i++)
    {
        sum += num;
    }

    if (FALSE)
    {
        num = 100;
    }

    char *title = "CTo";
    // oh wait, I didn't capitalize the O
    //title[2] = 'O';

    // I need this function to run because it contains important information
    soluton();
    return 0;
}
