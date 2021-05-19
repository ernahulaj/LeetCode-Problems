class Solution{
public:
    string addBinary(string a, string b) {
        string rez;
        int i = a.size() - 1, j = b.size() - 1; // these variables act as pointers to keep track of which digit we are looking at, and start at the right-most position, so the least signifnicant digit
        int shuma, bartja = 0;

        while (i >= 0 || j >= 0) { // we use 'or' to traverse until both numbers are finished traversing
            shuma = bartja;
            if (i >= 0)  // if string a is not traversed completely
                shuma += a[i] - '0'; // the -'0' converts the given character to its integer value 
            if (j >= 0)
                shuma += b[j] - '0';

            rez += to_string(shuma % 2); // % 2 because we are adding in the binary system
            bartja = shuma / 2; // to get the carry
            i--; j--;
        }
        if (bartja != 0) // if a final carry is left we add it to the result
            rez += '1';
        reverse(rez.begin(), rez.end()); // the result is built in the reverse order, so to get the correct answer we reverse the string
        return rez;
    }
};
