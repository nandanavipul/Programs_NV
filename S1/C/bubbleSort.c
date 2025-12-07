#include <stdio.h>
void main()
{
    int arr[10], index, j, number, temp;
    printf("Enter array size: ");
    scanf("%d", &number);
    printf("Enter array %d elements: ", number);
        for(index = 0; index < number; ++index)
        { 
            scanf("%d", &arr[index]);
        }
        printf("Bubble sort initializing...\n");
        for(index=0; index < (number-1); ++index)
        {
            for(j=0; j < (number-index-1); ++j)
            {
                if(arr[j] > arr[j+1])
                {
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                    
                }
            }
        }
        printf("Bubble sort successful... In ascending order\n");
        for(index = 0; index < number; ++index)
        { 
            printf("%d, ", arr[index]);
        }
}