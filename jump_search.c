#include <stdio.h>
#include <math.h>
void jump_search(int Arr[], int ele, int size)
{
    int jump, pos = 0, flag = 0, i;
    jump = sqrt(size);
    pos = pos + jump;
    i = pos;
    while ((ele != Arr[pos])&&(size!=pos))
    {
        if ((ele > Arr[pos]) && (ele <= Arr[pos + jump]))
        {
            for (i = pos; i <= pos + jump; i++)
            {
                if (ele == Arr[i])
                {
                    flag = 1;
                    break;
                }
            }
            pos = i;
        }
        else if (ele < Arr[pos])
        {
            for (i = 0; i <= pos; i++)
            {
                if (ele == Arr[i])
                {
                    flag = 1;
                    break;
                }
            }
            pos = i;
        }
        else
        {
            pos = pos + jump;
        }
    }
    if (flag == 1 || ele == Arr[pos])
    {
        printf("Element Found At : %d Index", i);
    }
    else
    {
        printf("Element Not Found\n");
    }
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int size, ele;
    size = sizeof(arr) / sizeof(arr[0]);
    printf("Enter An Element:");
    scanf("%d", &ele);
    jump_search(arr, ele, size);

    return 0;
}