/*Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.

Note that after backspacing an empty text, the text will continue empty.

Example 1:
Input: s = "ab#c", t = "ad#c"
Output: true
Explanation: Both s and t become "ac".

Example 2:
Input: s = "ab##", t = "c#d#"
Output: true
Explanation: Both s and t become "". */

class Solution {
public:
    bool backspaceCompare(string s, string t) {

        string rez1, rez2;
        int i = 0;

        while (s[i] != '\0') { // traverse the string
            if (s[i] >= 'a' && s[i] <= 'z') // if character of string is a-z (a letter) we append it to the rez
                rez1 += s[i];
            else if (!rez1.empty()) // if it is not empty & not a-z it means it is a '#' character, so we delete the previous character
                rez1.pop_back();
            i++;
        }

        i = 0;

        while (t[i] != '\0') {
            if (t[i] >= 'a' && t[i] <= 'z')
                rez2 += t[i];
            else if (!rez2.empty())
                rez2.pop_back();
            i++;
        }
        
        if (rez1.compare(rez2) == 0) // if the strings are the same return true
            return true;
        
        return false;
    }
};
