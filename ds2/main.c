/* C Program to MERGE two unsorted arrays and then SORT them. */

#include<stdio.h>
#include<conio.h>
#define MAX 20
void main()
{
    int f[MAX],s[MAX];
    int m,n;     // to read the size of two arrays
    int i,j,temp;
    printf("Enter the 1st array size(1-20) :");
    scanf("%d",&m);
    printf("Enter the 2nd array size(1-20) :");
    scanf("%d",&n);
    printf("\nEnter the 1st array elements:\n");
    for(i=0; i< m; i++)
        scanf("%d",&f[i] );
    printf("\nEnter the 2nd array elements:\n");
    for(j=0; j< n; j++)
        scanf("%d", &s[j] );

    for(j=0; j< n; j++)  // to store 's' elements to 'f'
    {
        f[i]=s[j];
        i++;
    }
    printf("\nBefore ascending, the merged array is:\n");
    for(i=0; i< m+n; i++)
    printf("%5d",f[i] );

    for(i=0; i< m+n; i++)// to arrange the 'f' elements in Descending oder
    {
        for(j=i; j< (m+n)-1; j++)
        {
            if(f[i]> f[ j+1])
            {
                temp=f[i];
                f[i]=f[ j+1];
                f[j+1]=temp;
            }
        }
    }
    printf("\nAfter ascending, the sorted merged array is:\n");
    for(i=0; i< m+n; i++)
    printf("%5d",f[i] );
    getch();
}
