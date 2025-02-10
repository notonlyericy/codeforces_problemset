#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n; std::cin >> n;
    if (n % 2 == 0) {
        std::cout << "NO\n";
        return 0;
    }

    std::vector<int> ans(2 * n, 0);
    int k = 1;
    for (int i = 0; k <= 2 * n; i = (i + 1) % (2 * n)) {
        ans[i] = k++;
        i = (i + n) % (2 * n);
        ans[i] = k++;
    }
    
    std::cout << "YES\n";
    for (auto &v : ans) std::cout << v << " ";

    return 0;
}