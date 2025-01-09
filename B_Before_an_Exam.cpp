#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int d, st; std::cin >> d >> st;
    std::vector<int> mint(d, 0);
    std::vector<int> maxt(d, 0);
    std::vector<int> ans(d, 0);

    int minst, maxst;
    minst = maxst = 0;
    for (int i = 0; i < d; i++) {
        std::cin >> mint[i] >> maxt[i];
        minst += mint[i];
        maxst += maxt[i];
    }

    bool ok = true;
    int i = 0;
    while (st != 0 && i < d) {
        if (st < minst || st > maxst) {
            ok = false;
            break;
        }
        minst -= mint[i];
        maxst -= maxt[i];
        for (int t = mint[i]; t <= maxt[i]; t++) {
            if (st - t >= minst && st - t <= maxst) {
                ans[i] = t;
                st -= t;
                break;
            }
         }
         i++;  
    }
    std::cout << (ok ? "YES\n" : "NO\n");
    if (ok) {
        for (int i = 0; i < d; i++) std::cout << ans[i] << " ";
    }
    return 0;
}