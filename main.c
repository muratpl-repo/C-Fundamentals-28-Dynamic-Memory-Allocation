#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");
    int *alan1 = malloc(10*sizeof(int));
    int *alan2 = calloc(10,sizeof(int));
    for(int i=0;i<10;i++){

        printf("alan1[%d]=%d   alan2[%d]=%d\n",i,alan1[i],i,alan2[i]);
    }
    alan1 = realloc(alan1,15*sizeof(int));
    for(int i=0;i<15;i++){
        printf("alan1[%d]=%d\n",i,alan1[i]);
    }

    return 0;
}
