#include "project1.h"

void shell_sort1(std::vector<int>& nums){
    for (int gap = nums.size()/2; gap > 0; gap /= 2){
        for (int i = gap; i < nums.size(); i++){
            int tmp = nums[i];
            int j = i;
            while (j >= gap && tmp <= nums[j - gap]){
                nums[j] = nums[j - gap];
                j -= gap;
            }
            nums[j] = tmp;
        }
    }
}

