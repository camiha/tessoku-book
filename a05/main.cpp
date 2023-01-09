#include <iostream>
using namespace std;

int main() {
    int N, K, counter = 0;
    cin >> N >> K;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            int value = K - i - j;
            if (0 < value && value <= N) {
                counter++;
            }
        }
    }

    cout << counter << endl;
    return 0;
}