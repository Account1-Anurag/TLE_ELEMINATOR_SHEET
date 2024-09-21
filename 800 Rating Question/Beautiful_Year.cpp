#include <iostream>

using namespace std;

bool dist(int year) {
    int digits[10] = {0};  
    while (year > 0) {
        int digit = year % 10;  
        digits[digit]++;        
        if (digits[digit] > 1) {
            return false;       
        }
        year /= 10;  
    }
    
    return true;  
}

int main() {
    int y;
    cin >> y;

    y++;  
    while (!dist(y)) {
        y++;
    }

    cout << y << endl;

    return 0;
}
