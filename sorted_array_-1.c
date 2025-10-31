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

// Function to find the first occurrence of target
int findFirstOccurrence(int arr[], int size, int target) {
    int low = 0, high = size - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            result = mid;
            high = mid - 1; // Search to the left
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

// Function to find the last occurrence of target
int findLastOccurrence(int arr[], int size, int target) {
    int low = 0, high = size - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            result = mid;
            low = mid + 1; // Search to the right
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    int size, target;

    // Input size of array
    printf("Enter size of sorted array: ");
    scanf("%d", &size);

    int nums[size];

    // Input elements of array
    printf("Enter %d elements in sorted order: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    // Input target element
    printf("Enter target element: ");
    scanf("%d", &target);

    int firstIndex = findFirstOccurrence(nums, size, target);
    int lastIndex = findLastOccurrence(nums, size, target);

    printf("First occurrence of %d is at index: %d\n", target, firstIndex);
    printf("Last occurrence of %d is at index: %d\n", target, lastIndex);

    return 0;
}

