#include<stdio.h>
#include <stdlib.h>   // for exit() function

int main()
{
    char c[1000];
    FILE *fptr;

    if ((fptr = fopen("file.txt", "r")) == NULL)
    {
        printf("Terjadi kesalahan dalam membuka file");
        // exit from program if file pointer returns NULL.
        exit(1);         
    }

    // read the text until newline 
    fscanf(fptr,"%[^\n]", c);

    printf("Data dari file:\n%s", c);
    fclose(fptr);
    
    return 0;
}
