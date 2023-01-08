
#include <iostream>
#include <string>
using namespace std;

int main() {
    int total = 0;
    string input;
    cin >> input;

    string reversed_input(input.rbegin(), input.rend());

    for (int i = 0; i < input.size(); i++) {
        int temp = (1 << i);
        if (reversed_input[i] == '1') total += temp;
    }

    cout << total << endl;
    return 0;
}