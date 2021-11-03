#include "project1.h"
#include <cmath>

void merge(std::vector<int>& nums, int start, int mid, int end);
void hybrid_sort(std::vector<int>& nums, int H);
int partition(std::vector<int>& nums, int start, int end);
void insertion_sort(std::vector<int>& nums, int start, int end);

void hybrid_sort1(std::vector<int>& nums){
    int H = pow(nums.size(), 1.0/2.0);
    hybrid_sort(nums, H);
}
void hybrid_sort(std::vector<int>& nums, int start, int end, int H){
    int len = end - start + 1;
    if (len <= H){
        insertion_sort(nums, start, end);
        return;
    }
//    int mid = partition(nums, start, end);
    int mid = (len >> 1) + start;
    hybrid_sort(nums, start, mid, H);
    hybrid_sort(nums, mid+1, end, H);
    merge(nums, start, mid, end);
}
void hybrid_sort(std::vector<int>& nums, int H){
    hybrid_sort(nums, 0, nums.size()-1, H);
}
