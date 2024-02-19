#include <vector>

std::vector<int> addOneToNumber(std::vector<int> arr) {
    int n = arr.size();
    int carry = 1;

    for (int i = n - 1; i >= 0 && carry; --i) {
        int sum = arr[i] + carry;
        carry = sum / 10;
        arr[i] = sum % 10;
    }

    if (carry)
        arr.insert(arr.begin(), carry);

    // Remove leading zeros
    auto it = arr.begin();
    while (it != arr.end() && *it == 0)
        it = arr.erase(it);

    return arr;
}
