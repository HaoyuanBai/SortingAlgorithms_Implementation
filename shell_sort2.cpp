#include "project1.h"
void shell_sort2(std::vector<int>& nums){
    std::vector<int> sequence;
    sequence.push_back(1);
    for (int h = 1; h * 2 + 1 < nums.size(); h = h * 2)
        sequence.push_back(h * 2 + 1);

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
