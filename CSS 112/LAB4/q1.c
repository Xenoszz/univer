#include <stdio.h>

int main(){
    int arr[100],sizearr,elements,i,j;
    printf("sort elements of array in ascending order : \n---------------------------------------------------------------------------------\n");
    printf("Input the size of array : ");
    scanf("%d",&sizearr);
    printf("Input %d elements in the array : \n",sizearr);
    for(i = 0; i < sizearr; i++){
    printf("element - %d : ",i);
    scanf("%d",&arr[i]);
    }

    printf("\nElements of array is sorted in asending order: \n");

    for(i = 0; i < sizearr; i++)
    {
        for(j=i+1;j<sizearr;j++)
        {
            if(arr[i]>arr[j])
            {
                int num = arr[i];
                arr[i] = arr[j];
                arr[j] = num;
            }
        }
    }
    for(i = 0; i<sizearr; ++i)
    {
        printf("%d ",arr[i]);
    }
    printf("\n-----------------------------------------------------");
    return 0;
}