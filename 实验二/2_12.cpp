#include <iostream>
#include <string>
using namespace std;

bool isHighLessThanLow(int num) {
    string s = to_string(num);
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] >= s[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    for (int num = 1; num <= 10000; num++) {
        if (isHighLessThanLow(num)) {
            cout << num << " ";
        }
    }

    return 0;
}