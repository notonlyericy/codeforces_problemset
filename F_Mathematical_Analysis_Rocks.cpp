#include <iostream>
#include <unordered_map>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::unordered_map<int, int> record; // <book, stu>
    int b, i, n; std::cin >> n;
    std::vector<int> ans(n, 0);
    
    for (b = 1; b <= n; b++) {
        std::cin >> i;
        record[b] = i;
    }

    for (b = 1; b <= n; b++) {
        std::cin >> i;
        ans[record[b] - 1] = i;
    }

    for (auto &v : ans) std::cout << v << " ";

    return 0;
}