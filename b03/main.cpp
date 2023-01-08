#include <iostream>
using namespace std;

int main() {
    int N, A[1000];
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j) continue;
            for (int k = 0; k < N; k++) {
                if (i == k || j == k) continue;
                if ((A[i] + A[j] + A[k]) == 1000) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;
    return 0;
}