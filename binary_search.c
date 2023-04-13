#include <stdio.h>
#include <stdlib.h>

void binary_search(int Arr[], int size, int ele)
{
    int l, u, mid;
    l = 0;
    u = (size - 1);
    mid = (l + u) / 2;
    while ((ele != Arr[mid]) && ((mid != (size - 1)) && (mid != 0)))
    {
        if (ele > Arr[mid])
        {
            l = mid + 1;
            mid = (l + u) / 2;
        }
        else if (ele < Arr[mid])
        {
            u = mid - 1;
            mid = (l + u) / 2;
        }
    }
    if (ele == Arr[mid])
        printf("Element Found At %d Index", mid);
    else
    {
    	printf("Element Not Found");
	}
}
int main()
{

    int arr[] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int size, ele;
    size = sizeof(arr) / sizeof(arr[0]);
    printf("Search An Element:");
    scanf("%d", &ele);
    binary_search(arr, size, ele);
    return 0;
}
