#include <stdio.h>
#include <conio.h>
{
void main(){
    int base, exponent, counter, result = 1;
    printf("Enter base and exponent \n");
    scanf("%d %d", &base, &exponent);
   
    for(counter = 0; counter < exponent; counter++){
        result = result * base;
    }
    
    printf("%d^%d = %d", base, exponent, result);
    getch();
}
