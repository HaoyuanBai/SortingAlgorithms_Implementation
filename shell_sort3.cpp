#include "project1.h"
void shell_sort3(std::vector<int>& nums){
    std::vector<int> sequence;
    for (int h = 1; h < nums.size(); h = h + 1){
        int x = h;
        while (x % 3 == 0) x = x / 3;
        while (x % 2 == 0) x = x / 2;
        if (x != 1) continue;
        sequence.push_back(h);
    }

    for (int idx = sequence.size() - 1; idx >= 0; idx--){
        int gap = sequence[idx];
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
