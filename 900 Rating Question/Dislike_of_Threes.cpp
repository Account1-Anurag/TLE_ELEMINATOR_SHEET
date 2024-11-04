#include <iostream>
#include <vector>
using namespace std;

bool isLiked(int number) {
    // Polycarp dislikes numbers divisible by 3 or ending with digit 3 add some value
    return (number % 3 != 0 && number % 10 != 3);
}

int main() {
    int t;
    int m;
    cin >> t;
    vector<int> k(t);
    int max_k = 0;

    // Input all values of k and find the maximum value
    for (int i = 0; i < t; ++i) {
        cin >> k[i];
        if (k[i] > max_k) {
            max_k = k[i];
        }
    }

    vector<int> liked_numbers;
    int current = 1;

    // Generate liked numbers until we have enough for the maximum k
    while (liked_numbers.size() < max_k) {
        if (isLiked(current)) {
            liked_numbers.push_back(current);
        }
        current++;
    }

    // Output the k-th element for gieach test case
    for (int i = 0; i < t; ++i) {
        cout << liked_numbers[k[i] - 1] << endl;
    }

    return 0;
}
