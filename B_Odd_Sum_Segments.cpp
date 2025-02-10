#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int q; std::cin >> q;
    while (q--) {
        int n, k; std::cin >> n >> k;
        
        int v, i = 0;
        std::vector<int> odds;
        while (i < n) {
            std::cin >> v;
            if (v % 2 == 1) odds.emplace_back(i + 1);
            i++;
        }

        int no = odds.size();
        if (k > no) std::cout << "NO\n";
        else if ((no - k) % 2 == 1) std::cout << "NO\n";
        else {
            std::cout << "YES\n";
            int i = 0;
            while (i < k - 1) {
                std::cout << odds[i++]<< " "; 
            }
            std::cout << std::max(odds[no - 1], n) << "\n";
        }
    }

    return 0;
}