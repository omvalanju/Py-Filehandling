#include <stdio.h>
#include <string.h>

int main()
{
    FILE *filepointer;

    char data[50]="hello";
    
    filepointer = fopen("test.txt","w");

    fputs(data,filepointer);
    fputs("\n",filepointer);

    fclose(filepointer);

    return 0;
}
