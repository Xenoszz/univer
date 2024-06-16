#include <stdio.h>

int main()
{
    int arr[100], sizearr, i = 0, j = 0, count = 0, min = 0, max = 0;
    float sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &sizearr);

    for (i = 0; i < sizearr; i++)
    {
        count++;
        printf("Enter number %d : ", count);
        scanf("%d", &arr[i]);
    }

    for (j = 0; j < sizearr; j++)
    {
        if (min == 0)
            min = arr[j];
        if (max < arr[j])
            max = arr[j];
        if (min > arr[j])
            min = arr[j];
        sum = sum + arr[j];
    }
    sum = sum / sizearr;
    printf("Maximum element is : %d\n", max);
    printf("Minium element is : %d\n", min);
    printf("\nAverage : %.2f", sum);
    printf("\n\n-------------------------------------");

    return 0;
}
