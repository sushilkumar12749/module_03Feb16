#include <stdio.h>
 main() 
{
    int height;
    printf("Enter the height of the pattern: ");
    scanf("%d", &height);
    for (int i = 0; i < height; i++) 
	{
        for (int j = 0; j <= i; j++) 
		{
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }
    
}

