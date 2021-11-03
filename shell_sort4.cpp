#include "project1.h"
void shell_sort4(std::vector<int>& nums){
    int good_sequence[] = {1, 5, 19, 41, 109, 209, 505, 929, 2161, 3905, 8929, 16001, 36289, 64769, 146305,
                           260609, 587521, 1045505, 2354689, 4188161, 9427969, 16764929, 37730305, 67084289,
                           150958081, 268386305, 603906049};
    std::vector<int> sequence;
    for (int h = 0; good_sequence[h] < nums.size(); h++){
        sequence.push_back(good_sequence[h]);
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
