#include <iostream>
#include <vector>

std::string dir = "LR";

void move(std::vector<int> &v, int i, int d)
{
    std::cout << dir[d];
    if (v[i] > 0) {
        std::cout << 'P';
        v[i]--;
    }
    std::cout << dir[(d + 1) % 2];
}

void del(std::vector<int> &v, int i)
{
    if (v[i]-- > 0) std::cout << 'P';
    while (v[i] > 0) {
        if (i < v.size() - 1) move(v, i + 1, 1);
        else move(v, i - 1, 0);
        del(v, i);
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int i, n; std::cin >> n;
    std::vector<int> w(n, 0);

    for (i = 0; i < n; i++) std::cin >> w[i];

    for (i = 0; i < n; i++) {
        del(w, i);
        if (i < n - 1) std::cout << 'R';
    }

    return 0;
}