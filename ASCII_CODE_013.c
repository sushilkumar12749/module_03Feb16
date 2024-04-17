// Find character value from ascii

#include <stdio.h>

 main() 
{
    int ascii_code;

    // Input ASCII code from the user
    printf("Enter the ASCII code: ");
    scanf("%d", &ascii_code);

    // Convert ASCII code to character
    char character_value = (char)ascii_code;

    // Display the character corresponding to the ASCII code
    printf("Character corresponding to ASCII code %d is: %c\n", ascii_code, character_value);

    
}

