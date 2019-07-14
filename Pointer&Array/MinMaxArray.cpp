//Largest and smallest
#include<stdio.h>
#define SIZE 10
 
int main()
{
    int my_arr[SIZE] = {34,56,78,15,43,71,89,34,70,91};
    int i, max, min;
 
    max = min = my_arr[0];
 
    for(i = 0; i < SIZE; i++)
    {
        // if value of current element is greater than previous value
        // then assign new value to max
        if(my_arr[i] > max)
        {
            max = my_arr[i];
        }
 
        // if the value of current element is less than previous element
        // then assign new value to min
        if(my_arr[i] < min)
        {
            min = my_arr[i];
        }
     }
 
    printf("Lowest value = %d\n", min);
    printf("Highest value = %d", max);
 
    // signal to operating system everything works fine
    return 0;
}
