#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    int *array = (int *) malloc(10 * sizeof(int));
    int sizeOfArray = 10;
    int size = 0;

    int input;
    while (scanf("%d",&input) != EOF)
        if (size < sizeOfArray)
        {
            array[size] = input; 
            size++;
        } else
        {
            sizeOfArray += 10;
            array = (int *) realloc(array, sizeOfArray * sizeof(int));
        } 

    for(int i = 0; i < sizeOfArray; i++)
    {
        printf("array[%d] = %d\n ",i,array[i]);
    } 

    free(array);
    return 0;
} 