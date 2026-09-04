#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> openedBrakets;
        for (int i = 0; i<s.size(); ++i)
        {
            char current = s[i];
            if (current == '(' || current == '[' || current == '{')
            {
                openedBrakets.push(current);
                continue;
            }

            if (openedBrakets.empty())
            {
                return false;
            }

            char lastOpened = openedBrakets.top();
            bool braketsClose = (current == ')' && lastOpened == '(' || current == ']' && lastOpened == '[' || current == '}' && lastOpened == '{');

            if (!braketsClose)
            {
                return false;
            }

            openedBrakets.pop();

        }
        return openedBrakets.empty();
    }
};
