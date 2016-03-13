#include<stdio.h>
#include<conio.h>

#define MAX 10

int main()
{
    FILE *fp;
    int number,i,j;
    float xvalue[MAX],yvalue[MAX],search,product;
    float sum=0;
    fp=fopen("lgrninv.dat","w");
    printf("\n\n");
    fprintf(fp,"\n\n");
    printf("How many numbers you want to enter for x  : ");
    fprintf(fp,"How many numbers you want to enter for x  : ");
    scanf("%d",&number);
    fprintf(fp,"%d",number);
    for(i=0;i<number;i++)
    {
        printf("\nEnter value for x(%d)  : ",i);
        fprintf(fp,"\nEnter value for x(%d)  : ",i);
        scanf("%f",&xvalue[i]);
        fprintf(fp,"%f",xvalue[i]);
        printf("\nEnter value for y(%d)  : ",i);
        fprintf(fp,"\nEnter value for y(%d)  : ",i);
        scanf("%f",&yvalue[i]);
        fprintf(fp,"%f",yvalue[i]);
    }
    printf("\nEnter any value of y for which you want to find x : ");
    fprintf(fp,"\nEnter any value of y for which you want to find x : ");
    scanf("%f",&search);
    fprintf(fp,"%f",search);
    for(i=0;i<number;i++)
    {
        product=1;
        for(j=0;j<number;j++)
        {
            if(i!=j)
            {
                product=product*(search-yvalue[j])/(yvalue[i]-yvalue[j]);
            }
        }
        sum=sum+xvalue[i]*product;
    }
    printf("\n\n\n\n");
    fprintf(fp,"\n\n\n\n");
    printf("LAGRANGE'S INVERSE INTERPOLATION METHOD  ");
    fprintf(fp,"LAGRANGE'S INVERSE INTERPOLATION METHOD  ");
    printf("\n\n");
    fprintf(fp,"\n\n");
    printf("  X      Y   ");
    fprintf(fp,"  X      Y   ");
    printf("\n\n");
    fprintf(fp,"\n\n");
    for(i=0;i<number;i++)
    {
        printf("  %.2f   %.2f   ",xvalue[i],yvalue[i]);
        fprintf(fp,"  %.2f   %.2f   ",xvalue[i],yvalue[i]);
        printf("\n");
        fprintf(fp,"\n");
    }
    printf("\n\n");
    fprintf(fp,"\n\n");
    printf("Interpolated value is  :   %.4f  ",sum);
    fprintf(fp,"Interpolated value is  :   %.4f  ",sum);
    fclose(fp);
    return 0;
}
