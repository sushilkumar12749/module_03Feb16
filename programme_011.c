//Accept 5 names from user at run time

#include <stdio.h>

 main() 
{
    char names[5][50]; // Array to store 5 names, each name can have up to 50 characters
    int i;

    // Input 5 names from the user
    printf("Enter 5 names:\n");
    for (i = 0; i < 5; i++) 
	{
        printf("Name %d: ", i + 1);
        scanf("%s", names[i]);
    }

    // Display the names entered by the user
    printf("\nNames entered by the user:\n");
    for (i = 0; i < 5; i++) 
	{
        printf("%s\n", names[i]);
    }

    
}

