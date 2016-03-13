#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *iptr,ivar;
    char *cptr,cvar[1];
    float *fptr,fvar;
    printf("enter an integer value\n");
    scanf("%d",&ivar);
    fflush(stdin);
    printf("enter an character value\n");
    scanf("%s",cvar);
    fflush(stdin);
    printf("enter an real value\n");
    scanf("%f",&fvar);
    fflush(stdin);
    iptr=&ivar;
    cptr=&cvar;
    fptr=&fvar;
    printf("\n integer value %d is stored at %u",*iptr,iptr);
    printf("\n character value %c is stored at %u",*cptr,cptr);
    printf("\n real value %f is stored at %u",*fptr,fptr);
    return 0;
}
