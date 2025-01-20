#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    bool isLeft = true;
    int i, n, k; std::cin >> n >> k;

    i = 1;
    while (k-- > 1) {
        std::cout << (isLeft ? i++ : n--) << " ";
        isLeft = !isLeft;
    }

    while (i <= n) std::cout << (isLeft ? i++ : n--) << " ";

    return 0;
}