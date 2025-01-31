#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n; std::cin >> n;
    std::vector<int> arr(n, 0);
    int i, last = -1;

    for (i = 0; i < n; i++) {
        std::cin >> arr[i];
        if (arr[i] == 0) last = i;
        else arr[i] = (last == -1 ? INT32_MAX : i - last);
    }

    for (i = last - 1; i >= 0; i--) {
        if (arr[i] == 0) last = i;
        else arr[i] = std::min(arr[i], last - i);
    }

    for (auto &v : arr) std::cout << v << " ";

    return 0;
}