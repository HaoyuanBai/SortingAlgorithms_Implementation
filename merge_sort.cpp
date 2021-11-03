#include "project1.h"

void merge_sort(std::vector<int>& nums, int start, int end);
void merge(std::vector<int>& nums, int start, int mid, int end);
void merge_sort(std::vector<int>& nums){
    int e = nums.size() - 1;
    merge_sort(nums, 0, e);
}
void merge(std::vector<int>& nums, int start, int mid, int end){
    int i = start, j = mid + 1;
    std::vector<int> tmp;
    while (i <= mid && j <= end){
        if (nums[i] < nums[j]){
            tmp.push_back(nums[i]);
            ++i;
        } else {
            tmp.push_back(nums[j]);
            ++j;
        }
    }
    while (i <= mid){
        tmp.push_back(nums[i]);
        ++i;
    }
    while (j <= end) {
        tmp.push_back(nums[j]);
        ++j;
    }
    for (int k = start; k <= end; ++k)
        nums[k] = tmp[k-start];
}

void merge_sort(std::vector<int>& nums, int start, int end){
    if (start >= end)
        return;
    int len = end - start, mid = (len >> 1) + start;
    merge_sort(nums, start, mid);
    merge_sort(nums, mid + 1, end);
    merge(nums, start, mid, end);
}