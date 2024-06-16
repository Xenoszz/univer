#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void even(int arr[], int size, int even_array[], int *even_size);
void odd(int arr[], int size, int odd_array[], int *odd_size);

int main() {
    int che1, che2,arr[20], arri = 0, i, n;
    printf("Input number of Elements (maximum 20) : ");
    scanf("%d", &n);

    printf("Enter all %d Array Elements : \n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    arri = n;
    int even_array[arri],odd_array[arri],even_size = 0,odd_size = 0;

    even(arr, n, even_array, &even_size);
    odd(arr, n, odd_array, &odd_size);

    printf("\nAll even numbers are: ");
    for (i = 0; i < even_size; ++i) {
        if(i > 0){
            printf(",");
        }
        printf(" %d", even_array[i]);
    }
    printf("\nAll odd numbers are: ");
    for (i = 0; i < odd_size; ++i) {
        if(i > 0){
            printf(",");
        }
        printf(" %d", odd_array[i]);
    }

    return 0;
}

void even(int arr[], int size, int even_array[], int *even_size)
{
    int i;
    for(i = 0; i < size; i++){
        if (arr[i] % 2 == 0 ){
            even_array[(*even_size)++] = arr[i];
        }
    }

}
void odd(int arr[], int size, int odd_array[], int *odd_size)
{
    int i;
    for(i = 0; i < size; i++){
        if (arr[i] % 2 != 0 ){
            odd_array[(*odd_size)++] = arr[i];
        }
    }
}