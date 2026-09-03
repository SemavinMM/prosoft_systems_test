#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> position;
        for (int i = 0; i < nums.size(); ++i)
        {
            int x = nums[i]; //текущее число
            int y = target - x; //число которое мы ищем

            //проверка если пара нашлась
            if (position.count(y))
            {
                return {position[y], i};
            }

            position[x] = i;
        }

        return {}; 
    }
};
