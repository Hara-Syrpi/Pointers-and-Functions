#include <stdio.h>
#include <locale.h>

void swap_no_pointers(int a , int b);
void swap_with_pointers(int *pa , int *pb);

int main(void)
{
    setlocale(LC_ALL, "Greek");

    int num1 = 100; int num2 = 200;

    printf("The numbers before swap without pointers are: ");
    printf(" num1 = %d , num2 = %d \n", num1,num2);

    swap_no_pointers(num1,num2);
    printf("The numbers after swap without pointers are:");
    printf(" num1 = %d num2 = %d \n", num1,num2);

    printf("The numbers before swap with pointers are:");
    printf(" num1 = %d num2 = %d \n", num1,num2);

    swap_with_pointers(&num1,&num2);
    printf("The numbers after swap with pointers are:");
    printf(" num1 = %d num2 = %d \n", num1,num2 );

    return 0;
}

void swap_no_pointers(int a , int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;
}

void swap_with_pointers(int *pa , int *pb)
{
    int temp;

    temp = *pa;
    *pa = *pb;
    *pb = temp;
}

