#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, m, k; std::cin >> n >> m >> k;
    std::vector<std::vector<int>> row(n + 1, std::vector<int>(2, 0));
    std::vector<std::vector<int>> col(m + 1, std::vector<int>(2, 0));

    int a, b, c; 
    for (int i = 1; i <= k; i++) {
        std::cin >> a >> b >> c;
        if (a == 1) {
            row[b][0] = i;
            row[b][1] = c;
        } else {
            col[b][0] = i;
            col[b][1] = c;
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            std::cout << (row[i][0] > col[j][0] ? row[i][1] : col[j][1]) << " ";
        }
        std::cout << "\n";
    }
    return 0;
}