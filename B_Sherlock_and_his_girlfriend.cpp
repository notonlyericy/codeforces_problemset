#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n; std::cin >> n;
    std::vector<int> res(n + 2, 1);

    int i, j, cnt = 1 + (n > 2);
    for (j = 4; j <= n + 1; j++) {
        if (j % 2 == 0) res[j] = 2;
        else {
            for (i = 2; i * i <= j; i++) {
                if (j % i == 0) { res[j] = 2; break; }
            }
        }
    }

    std::cout << cnt << "\n";
    for (i = 2; i <= n + 1; i++) std::cout << res[i] << " ";
    
    return 0;
}