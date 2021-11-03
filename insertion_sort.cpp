#include "project1.h"
void insertion_sort(std::vector<int>& nums, int start, int end);

void insertion_sort(std::vector<int>& nums, int start, int end){
    for (int i = start + 1; i <= end; ++i){
        int key = nums[i];
        int j = i - 1;
        while ((j >= start) && (key < nums[j])){
            nums[j+1] = nums[j];
            j--;
        }
        nums[j+1] = key;
    }
}
void insertion_sort(std::vector<int>& nums){
    insertion_sort(nums, 0, nums.size() - 1);
}

