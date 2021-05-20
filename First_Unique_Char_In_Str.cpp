/*Given a string s, return the first non-repeating character in it and return its index. If it does not exist, return -1.

Example 1:
Input: s = "leetcode"
Output: 0

Example 2:
Input: s = "loveleetcode"
Output: 2

Example 3:
Input: s = "aabb"
Output: -1*/

class Solution {
public:
    int firstUniqChar(string s) {
        int count[26] = { 0 }; // we create an array where the count of each character from a-z is 0

        for (char c : s) // iterate all characters of the given string
            count[c - 'a'] += 1; // to turn all elements of string to corresponding numbers 0-25 (a=0, b=1, ...)

        for (int i = 0; i < s.length(); i++) // we iterate the string to get the index of the letters 
            if (count[s[i] - 'a'] == 1) // if character is unique we return its index
                return i;

        return -1;

    }
};
