#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;

        for (int i = 0; i<strs.size(); ++i)
        {
            string word = strs[i];
            string sortWord = word;

            sort(sortWord.begin(), sortWord.end());
            groups[sortWord].push_back(word);
        }

        vector<vector<string>> result;

        for (auto& group: groups)
        {
            result.push_back(group.second);
        }

        return result;
    }
};
