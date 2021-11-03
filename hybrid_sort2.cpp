#include "project1.h"
#include <cmath>

void hybrid_sort(std::vector<int>& nums, int H);
void hybrid_sort2(std::vector<int>& nums){
    int H = pow(nums.size(), 1.0/3.0);
    hybrid_sort(nums, H);
}