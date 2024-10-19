//Reverse A string using class and functions in c++

#include <iostream>
#include <string>
#include <algorithm> // for swap
using namespace std;

class Solution
{
public:
    string reverseWord(string str)
    {
        int n = str.length();
        for (int i = 0, j = n - 1; i < j; i++, j--)
        {
            swap(str[i], str[j]);
        }
        return str;
    }
};

int main() {
    Solution sol;
    string input;
    cout << "Enter a word: ";
    cin >> input;
    string reversed = sol.reverseWord(input);
    cout << "Reversed word: " << reversed << endl;
    return 0;
}
