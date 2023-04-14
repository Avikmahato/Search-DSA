#include <stdio.h>
#include <stdlib.h>

void expo_search(int Arr[], int size, int ele)
{
    int i, low, mid, h;
    if (Arr[0] == ele)
    {
        printf("The Element Found At 0 Index\n");
    }
    else
    {
        i = 1;
        while (i < size && Arr[i] <= ele)
        {
            i = i * 2;
        }
        low = i / 2;
        if (i >= size)
        {
            h = size - 1;
        }
        else
        {
            h = i;
        }
        mid = (low + h) / 2;
        while ((Arr[mid] != ele) && (mid != (size - 1) && mid != 0))
        {
            if (Arr[mid] < ele)
            {
                low = mid + 1;
                mid = (low + h) / 2;
            }
            else
            {
                h = mid - 1;
                mid = (low + h) / 2;
            }
        }
        if (Arr[mid] == ele)
            printf("Element Found At Index : %d", mid);
        else
            printf("Element Not Found\n");
    }
}

int main()
{
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9};
    int ele, size;
    size = sizeof(arr) / sizeof(arr[0]);
    printf("Enter An Element:");
    scanf("%d", &ele);

    expo_search(arr, size, ele);

    return 0;
}
