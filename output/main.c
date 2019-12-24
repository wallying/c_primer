#include <stdio.h>
#include <stdlib.h>


/*******************************************************************************
printf()
putchar()
puts()

fprintf()
putc()
fputs()

sprintf()
*******************************************************************************/


int main()
{
    FILE *fpFile = NULL;

    if ((fpFile = fopen("output.txt", "r")) == NULL) {
        printf("open \"output.txt\" error!!!");
        exit(1);
    }

    fclose(fpFile);

    return 0;
}
