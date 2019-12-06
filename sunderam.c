#include <stdio.h>
#include <math.h>
int convertBinaryToDecimal(int n);
int main()
{
    int n;
    int Val =5;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    printf("%d in binary = %d in decimal", n, convertBinaryToDecimal(n));
    return 0;
}
int convertBinaryToDecimal(int n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n = n/ 10;
        decimalNumber = decimalNumber + remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}