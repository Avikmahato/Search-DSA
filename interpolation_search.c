#include <stdio.h>
#include <stdlib.h>

void intp_search(int Arr[], int size, int ele)
{
    int l, h, pos;
    l = 0;
    h = size - 1;
    pos = l + (ele - Arr[l]) * (h - l) / (Arr[h] - Arr[l]);
    while ((ele != Arr[pos]) && ((pos != size - 1) && (pos != 0)))
    {
        if (ele > Arr[pos])
        {
            h = pos + 1;
            pos = l + (ele - Arr[l]) * (h - l) / (Arr[h] - Arr[l]);
        }
        else if (ele < Arr[pos])
        {
            h = pos - 1;
            pos = l + (ele - Arr[l]) * (h - l) / (Arr[h] - Arr[l]);
        }
    }
    if (Arr[pos] == ele)
        printf("Element Found At Index : %d", pos);
    else
        printf("Element Is Not Found\n");
}

int main()
{

    int arr[] ={12,14,15,16,17};
    int size, ele;
    size = sizeof(arr) / sizeof(arr[0]);
    printf("Search An Element:");
    scanf("%d", &ele);
    intp_search(arr, size, ele);

    return 0;
}