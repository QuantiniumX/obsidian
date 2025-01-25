#include <iostream>
#include <queue>
#include <vector>

void bfs(std::vector<std::vector<int>> &graph, int start) {
    int size = graph.size();
    std::vector<bool> visited(size, false);
    std::queue<int> q;

    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int curr = q.front();
        std::cout << curr << " ";
        q.pop();

        for (int next : graph[curr]) {
            if (!visited[next]) {
                visited[next] = true;
                q.push(next);
            }
        }
    }
    std::cout << std::endl;
}

int main() {
    std::vector<std::vector<int>> graph{{1, 2}, {0, 2}, {0, 1, 3}, {2}};
    bfs(graph, 0);
}
