#include <vector>
#include <iostream>

using namespace std;

// Rotates an image 90 degrees
template<typename T>
auto rotateImage(const vector<vector<T>>& input) {
    vector<vector<T>> out;
    for (int j = 0; j <= input[0].size() - 1; j++) {
        vector<T> row;
        for (int i = input.size() - 1; i >= 0; i--) {
            // out[j][(input.size() - 1) - i] = input[i][j];
            row.push_back(input[i][j]);
        }
        out.push_back(row);
    }
    return out;
}

int main()
{
    vector<vector<int>> image = {
        {1,2,3,7}, 
        {4,5,6,7},
        {8,9,0,7},
        {3,3,3,3},
    };

    cout << "Original:\n";
    for (const auto& row : image) {
        for (const auto& s : row) std::cout << s << ' ';
        std::cout << std::endl;
    }

    cout << "\nRotated:\n";
    auto out = rotateImage<int>(image);
    for (const auto& row : out) {
        for (const auto& s : row) std::cout << s << ' ';
        std::cout << std::endl;
    }

    return 0;
}
