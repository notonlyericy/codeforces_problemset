#include <bits/stdc++.h>    

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t; std::cin >> t;
    while (t--) {
        int n; std::cin >> n;
        int a, res = 0;
        bool hasMidZero = false;
        while (n--) {
            std::cin >> a;
            if (a != 0) {
                res = 1;
                if (hasMidZero) res = 2;
            } else {
                if (res == 1) hasMidZero = 1;
            }
        }

        std::cout << res << "\n";
    }

    return 0;
}