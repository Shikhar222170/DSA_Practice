#include <iostream>
#include <climits>  // for INT_MIN and INT_MAX
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long long n = x;   // convert to long long to avoid overflow
        long long rev = 0;

        bool isNegative = n < 0;
        if (isNegative)
            n = -n;   // safe, because n is long long now

        while (n > 0) {
            int rem = n % 10;
            n /= 10;
            rev = rev * 10 + rem;
        }

        if (isNegative)
            rev = -rev;

        // check if reversed value is within 32-bit signed int range
        if (rev < INT_MIN || rev > INT_MAX)
            return 0;

        return (int)rev;
    }
};

int main() {
    Solution s;
    int x;
    cout << "Enter an integer: ";
    cin >> x;
    cout << "Reversed number: " << s.reverse(x) << endl;
    return 0;
}
