#include <cmath>
#include <iostream>
#include <unordered_map>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, m; std::cin >> n >> m;
    std::unordered_map<int, int> sum = {{0, 0}};
    int v, l, r;

    for (int i = 1; i <= n; i++) {
        std::cin >> v;
        sum[i] = sum[i - 1] + v;
    }

    int ans = 0;
    while (m--) {
        std::cin >> l >> r;
        ans += std::max(sum[r] - sum[l - 1], 0);
    }

    std::cout << ans << "\n";
    return 0;
}