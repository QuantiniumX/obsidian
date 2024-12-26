#include <iostream>
#include <stack>
#include <vector>

void dfs(std::vector<std::vector<int>> &graph, int start) {
    int size = graph.size();
    std::vector<bool> visited(size, false);
    std::stack<int> s;

    s.push(start);
    while (!s.empty()) {
        int curr = s.top();
        s.pop();

        if (!visited[curr]) {
            visited[curr] = true;
            std::cout << curr << " ";

            for (int next : graph[curr]) {
                if (!visited[next]) {
                    s.push(next);
                }
            }
        }
    }
}

int main() {
    std::vector<std::vector<int>> graph{{1, 2}, {0, 2}, {0, 1, 3}, {2}};
    dfs(graph, 0);
}
