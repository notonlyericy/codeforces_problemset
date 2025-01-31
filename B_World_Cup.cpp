#include <cmath>
#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, a, b; std::cin >> n >> a >> b;
    int res = log2(n), ori = res;
    int mid, l = 0, r = n;

    while (l < r) {
        mid = (r - l) / 2 + l;
        if (std::min(a, b) <= mid && std::max(a, b) > mid) break;
        else {
            res--;
            if (std::min(a, b) > mid) l = mid;
            else r = mid;
        }
    }

    std::cout << (res == ori ? "Final!" : std::to_string(res)) << std::endl;

    return 0;
}