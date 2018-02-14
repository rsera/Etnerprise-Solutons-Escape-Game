/*  I always forget how to compile and run my code
    so here's a note to self:
    gcc badcode.c
    a.exe
*/

#include "badcode.h"
//#include <badcode.h>
#include <stdlib.h>

#define FALSE 1

typedef struct aStruct{
    int num;
    int* ptr;
}aStruct;

int main(void)
{
    aStruct *s = malloc(sizeof(aStruct));
    int *p;
    int x;
    //*p = x;

    char *title = "CTo";
    // oh wait, I didn't capitalize the O
    //title[2] = 'O';

    // I need this function to run because it contains important information
    soluton();
    return 0;
}
