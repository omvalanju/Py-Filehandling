#include <stdio.h>
#include <stdlib.h>

struct employee
{
    char name[100];
    int number;
    int salary;
}e;

int main()
{
    FILE *pointer;
    //FILE *name;
    //FILE *number;
    //FILE *salary;
    
    pointer = fopen("data.dat","a");
    //name = fopen("name.txt","w");
    //number = fopen("number.txt","w")
    //salary = fopen("salary.txt","w")

    printf("Enter Name:");
    scanf("%s",e.name);

    printf("Enter Number:");
    scanf("%d",&e.number);

    printf("Enter Salary:");
    scanf("%d",&e.salary);

    
    /* name = fopen("name.txt","a");
    fprintf(name,"%s\n",e.name);
    fclose(name);

    number = fopen("number.txt","a");
    fprintf(number,"%d\n",e.number);
    fclose(number);

    salary = fopen("salary.txt","a");
    fprintf(salary,"%d\n",e.salary);
    fclose(salary);*/
   
    fwrite(&e,sizeof(struct employee),1,pointer);
    
}
