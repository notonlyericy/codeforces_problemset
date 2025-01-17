#include <bits/stdc++.h>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s; std::cin >> s;
    int n = s.size();

    std::stack<int> fromRight;
    std::queue<int> fromLeft;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'l')    fromRight.push(i);
        else                fromLeft.push(i);       
    }

    while (!fromLeft.empty()) {
        std::cout << fromLeft.front() + 1 << "\n";
        fromLeft.pop();
    }

    while (!fromRight.empty()) {
        std::cout << fromRight.top() + 1 << "\n";
        fromRight.pop();
    }

    return 0;
}