#include <iostream>
#include <vector>
#include <map>
using namespace std;

int countRightTriangles(vector<pair<int, int>>& points) {
    map<int, int> x_count, y_count;
    int count = 0;

    // Count occurrences of each x and y coordinate
    for (auto& point : points) {
        x_count[point.first]++;
        y_count[point.second]++;
    }

    // For each point, calculate how many right triangles can be formed
    for (auto& point : points) {
        int x = point.first;
        int y = point.second;

        // If a point lies on the same x or y coordinate with other points, 
        // it can potentially form a right triangle.
        int rightTriangles = (x_count[x] - 1) * (y_count[y] - 1);

        // Add the number of right triangles formed using this point as a vertex
        count += rightTriangles;
    }

    return count;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> points(n);
        for (int i = 0; i < n; i++) {
            cin >> points[i].first >> points[i].second;
        }

        // Output the number of distinct non-degenerate right triangles
        cout << countRightTriangles(points) + 1<< endl;
    }

    return 0;
}
