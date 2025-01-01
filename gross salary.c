#include <stdio.h>
int main()
{
    int bs, hra, da, gs;
    printf("Enter the bascis salary: ");
    scanf("%d", &bs);
    printf("Enter the HRA: ");
    scanf("%d", &hra);
    printf("Enter the DA: ");
    scanf("%d", &da);
    gs = bs + hra + da;
    printf("Your gross salary is %d ", gs);
    return 0;
}