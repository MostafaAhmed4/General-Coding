#include <stdio.h>
#include <cs50.h>

int get_size(void);
void print_grid(int size);


int main(void)
{
    // get ssize of grid
    int n = get_size();


    //print grid of bricks
    print_grid(n);
}



int get_size(void)
{
    int n;
    do
    {
        n=get_int("size: ");
    }
    while (n < 1);
    return n;
}

void print_grid(int size)
{
    for (int i = 0; i< size; i++)
    {
        for (int j = 0; j< size; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}