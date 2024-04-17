/*If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe
minimum bill should be of Rs. 256/-*/

#include <stdio.h>

int main() 
{
    int customerID, units;
    char customerName[50];
    float chargePerUnit, totalAmount, surcharge, minimumBill;

    // Input customer details
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Units Consumed: ");
    scanf("%d", &units);

    // Electricity charge per unit
    chargePerUnit = 6.50; // Example charge per unit, you can change this value

    // Calculate total amount
    totalAmount = units * chargePerUnit;

    // Apply surcharge if the total amount exceeds Rs. 800
    if (totalAmount > 800) 
	{
        surcharge = totalAmount * 0.18; // 18% surcharge
        totalAmount += surcharge;
    }

    // Ensure the minimum bill is Rs. 256
    minimumBill = 256;
    if (totalAmount < minimumBill) 
	{
        totalAmount = minimumBill;
    }

    // Print electricity bill
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", units);
    printf("Charge per Unit: %.2f\n", chargePerUnit);
    printf("Total Amount to be Paid: %.2f\n", totalAmount);


}


