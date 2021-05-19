class Solution {
public:
    bool backspaceCompare(string s, string t) {

        string rez1, rez2;
        int i = 0;

        while (s[i] != '\0') {
            if (s[i] >= 'a' && s[i] <= 'z')
                rez1 += s[i];
            else if (!rez1.empty())
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
        if (rez1.compare(rez2) == 0)
            return true;
        return false;
    }
};