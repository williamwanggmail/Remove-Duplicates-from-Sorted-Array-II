

#include <iostream>
int removeDuplicates(int* nums,int numsSize) {
    int j = 0;
    for (int i = 0; i < numsSize; i++) {
        if (j<2 || nums[i] != nums[j - 2] ) {
            nums[j] = nums[i];
            j++;
        }
    }
    return j;
}
void printArray(int* arr,int max) {
    for (int x = 0; x < max; x++) {
        printf("%d", arr[x]);
    }
    printf("\n");
}

int main()
{
    int nums[6] = {1,1,1,2,2,3};
    printArray(nums,6);
    int ans = removeDuplicates(nums, 6);
    printf("%d \n" , ans);
    printArray(nums, ans);
}