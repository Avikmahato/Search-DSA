#include <stdio.h>
#include <stdlib.h>

int search(int Arr[], int ele, int size)
{
    int i, flag = 0;
    for (i = 0; i < size; i++)
    {
        if (Arr[i] == ele)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("Element Found At Index : %d", i);
    else
        printf("Element Not Found\n");
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size, ele;
    size = sizeof(arr) / sizeof(arr[0]);

    printf("Search An Element:");
    scanf("%d", &ele);
    search(arr, ele, size);
    return 0;
}