#include <stdio.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}

int main() {
    
    int value;
    value = 50;
    int *nbr;
    nbr = &value;
    printf("Before %d" ,*nbr);
    ft_ft(nbr);
    printf("After %d" ,*nbr);


    return 0;
}