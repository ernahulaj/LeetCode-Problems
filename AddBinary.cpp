class Solution{
public:
    string addBinary(string a, string b) {
        string rez;
        int i = a.size() - 1, j = b.size() - 1;
        int shuma, bartja = 0;

        while (i >= 0 || j >= 0) {
            shuma = bartja;
            if (i >= 0)
                shuma += a[i] - '0';
            if (j >= 0)
                shuma += b[j] - '0';

            rez += to_string(shuma % 2);
            bartja = shuma / 2;
            i--; j--;
        }
        if (bartja != 0)
            rez += '1';
        reverse(rez.begin(), rez.end());
        return rez;
    }
};
