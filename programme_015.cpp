
#include <stdio.h>

 main() 
 {
    int mathMarks, phyMarks, chemMarks, totalMarks, mathPhyTotal;

    // Input marks obtained in Physics, Chemistry, Mathematics
    printf("Input the marks obtained in Physics: ");
    scanf("%d", &phyMarks);

    printf("Input the marks obtained in Chemistry: ");
    scanf("%d", &chemMarks);

    printf("Input the marks obtained in Mathematics: ");
    scanf("%d", &mathMarks);

    // Input total marks of Maths, Physics, and Chemistry
    printf("Total marks of Maths, Physics, and Chemistry: ");
    scanf("%d", &totalMarks);

    // Input total marks of Maths and Physics
    printf("Total marks of Maths and Physics: ");
    scanf("%d", &mathPhyTotal);

    // Check eligibility based on criteria
    if (mathMarks >= 65 && phyMarks >= 55 && chemMarks >= 50 && totalMarks >= 190) 
	{
        printf("The candidate is eligible.\n");
    } else if (mathPhyTotal >= 140) 
	{
        printf("The candidate is eligible.\n");
    } else 
	{
        printf("The candidate is not eligible.\n");
    }

}

