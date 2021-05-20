class Solution {
public:
    int firstUniqChar(string s) {
        int count[26] = { 0 }; // the count of each character from a-z is 0

        for (char c : s) // iterate all characters of the string
            count[c - 'a'] += 1; // to turn all elements of string to corresponding numbers 0-25 (a=0, b=1, ...)

        for (int i = 0; i < s.length(); i++) // we iterate the string to get the index of the letters 
            if (count[s[i] - 'a'] == 1) // if character is unique we return its index
                return i;

        return -1;

    }
};
