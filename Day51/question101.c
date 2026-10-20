//Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

/*
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/


#include <stdio.h>
int main()
{
    int n;
    printf("Enter array size ");
    scanf("%d", &n);

    int nums[n];

    for (int i = 0; i < n; i++)
    {
        if (i < n - 1)
            scanf("%d,", &nums[i]);
        else
            scanf("%d", &nums[i]);
    }

    int target;
    scanf("%d", &target);

    int low = 0, high = (n - 1);
    int mid, first = -1, last = -1;

    // Find first occurrence
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            first = mid;
            high = mid - 1;
        }
        else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    // Reset bounds
    low = 0;
    high = n - 1;

    // Find last occurrence
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            last = mid;
            low = mid + 1;
        }
        else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    printf("%d, %d\n", first, last);

    return 0;
}