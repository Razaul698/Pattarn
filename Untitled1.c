#include<stdio.h>

int main()
{
	int n, row, col;
	printf("Enter Any Number : ");
	scanf("%d", &n);

	for(row=1; row<=n; row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("Juena ");
        }
        printf("\n");
    }



	return 0;
	}




