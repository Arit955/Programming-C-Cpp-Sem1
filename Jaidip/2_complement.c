#include <stdio.h>

#define SIZE 8

int main()
{
    char binary[SIZE + 1], onesComp[SIZE + 1], twosComp[SIZE + 1];
    int i, carry = 1;

    printf("Enter %d bit binary value: ", SIZE);

    // Input 8-bit binary string 
    gets(binary);

    // Find ones complement of the binary number 
    for (i = 0; i < SIZE; i++)
    {
        if (binary[i] == '1')
        {
            onesComp[i] = '0';
        }
        else if (binary[i] == '0')
        {
            onesComp[i] = '1';
        }
    }
    onesComp[SIZE] = '\0';
     //Add 1 to the ones complement
     
    for (i = SIZE - 1; i >= 0; i--)
    {
        if (onesComp[i] == '1' && carry == 1)
        {
            twosComp[i] = '0';
        }
        else if (onesComp[i] == '0' && carry == 1)
        {
            twosComp[i] = '1';
            carry = 0;
        }
        else
        {
            twosComp[i] = onesComp[i];
        }
    }
    twosComp[SIZE] = '\0';

    printf("Original binary = %s\n", binary);
    printf("Twos complement = %s\n", twosComp);

    return 0;
}