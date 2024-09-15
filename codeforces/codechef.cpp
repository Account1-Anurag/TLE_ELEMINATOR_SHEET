#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int calculatePairs(int freq) {
    return (freq * (freq - 1)) / 2;
}

int maxPairs(vector<int>& A, int N) {
    unordered_map<int, int> freq;
    int zero_count = 0;
    for (int i = 0; i < N; ++i) {
        if (A[i] == 0) {
            zero_count++;
        } else {
            freq[A[i]]++;
        }
    }
    int total_pairs = 0;
    int max_freq = 0;

    for (auto& pair : freq) {
        total_pairs += calculatePairs(pair.second);
        max_freq = max(max_freq, pair.second);  
    }
    if (zero_count > 0) {
        total_pairs += calculatePairs(max_freq + zero_count) - calculatePairs(max_freq);
    }
    
    return total_pairs;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        
        cout << maxPairs(A, N) << endl;
    }
    
    return 0;
}