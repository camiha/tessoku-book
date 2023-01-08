#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 9; i >= 0; i--) {
        int temp = (1 << i);
        int current = (N / temp) % 2;

        cout << current;
    }

    cout << endl;
    return 0;
}