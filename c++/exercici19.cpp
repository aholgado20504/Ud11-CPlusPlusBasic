#include <iostream>
#include <vector>
using namespace std;

int gran_llista(const vector<int>& nums) {
    if (nums.empty()) return 0;
    int max = nums[0];
    for (int x : nums) {
        if (x > max) max = x;
    }
    return max;
}

int main() {
    vector<int> v = {3, 4, 2, 3, 10};
    cout << gran_llista(v) << endl;
    return 0;
}
