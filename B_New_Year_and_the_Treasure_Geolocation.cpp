#include <iostream>
#include <queue>
#include <utility>


int main() 
{
    int i, n; std::cin >> n;
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>> o;
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> c;

    int x, y; 
    for (i = 0; i < n; i++) {
        std::cin >> x >> y;
        o.push(std::make_pair(x, y));
    }

    int a, b;
    for (i = 0; i < n; i++) {
        std::cin >> a >> b;
        c.push(std::make_pair(a, b));
    }

    std::cout << o.top().first + c.top().first << " " << o.top().second + c.top().second;

    return 0;
}