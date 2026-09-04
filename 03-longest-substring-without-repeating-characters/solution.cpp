#include <string>
#include <unordered_set>

using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> usedCharacters;

        int left = 0;
        int maxLength = 0;

        for (int right = 0; right < s.size(); ++right)
        {
            char current = s[right];

            while (usedCharacters.count(current))
            {
                usedCharacters.erase(s[left]);
                ++left;
            }
            usedCharacters.insert(current);

            int currentLenght = right - left +1;
            if (currentLenght > maxLength)
            {
                maxLength = currentLenght;
            }
        }
        return maxLength;
    }
};
