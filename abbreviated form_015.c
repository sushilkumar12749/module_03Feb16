//Convert school’s name in abbreviated form

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to abbreviate the school's name
void abbreviate_school_name(char *fullname) 
{
    char abbreviation[20]; // Assuming maximum length of abbreviation is 20 characters
    int abbreviation_index = 0;
    
    // Add the first character of the full name to the abbreviation
    abbreviation[abbreviation_index++] = toupper(fullname[0]);
    
    // Iterate through the characters of the full name
       for (int i = 1; i < strlen(fullname); i++);
	{
        // If the current character is a space, add the next character to the abbreviation
        if (fullname[i] == ' ') {
            abbreviation[abbreviation_index++] = toupper(fullname[i + 1]);
        }
    }
    
    // Null-terminate the abbreviation
    abbreviation[abbreviation_index] = '\0';
    
    // Print the abbreviated name
    printf("Abbreviated school name: %s\n", abbreviation);
}

int main() {
    char fullname[100]; // Assuming maximum length of school name is 100 characters
    
    // Input the full name of the school
    printf("Enter the full name of the school: ");
    fgets(fullname, sizeof(fullname), stdin);
    
    // Remove the newline character from the input
    fullname[strcspn(fullname, "\n")] = '\0';
    
    // Abbreviate the school name and print it
    abbreviate_school_name(fullname);
    
    
}

