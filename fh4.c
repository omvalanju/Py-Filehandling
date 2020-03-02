#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    struct employee
    {
        char name[100];
        int number;
        int salary;
    }e;

    FILE *pointer;
    pointer = fopen("data.dat","r");
    while (fread (&e, sizeof(struct employee), 1, pointer))
    printf ("Name = %s   Number = %d   Salary = %d\n",e.name,e.number,e.salary);
}
