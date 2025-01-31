#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int i, n, k; std::cin >> n >> k;
    std::vector<int> rn(n, 0), diff(n, 0);
    
    int sum = 0;
    for (i = 0; i < n; i++) {
        std::cin >> rn[i];
        sum += rn[i];
    }
    for (i = 0; i < n; i++) {
        std::cin >> diff[i];
        diff[i] = rn[i] - diff[i];
    }

    std::sort(diff.begin(), diff.end());
    for (i = 1; i <= n; i++) {
        if (i <= k) continue;
        else sum -= std::max(diff[i - 1], 0);
    }

    std::cout << sum << std::endl;

    return 0;
}