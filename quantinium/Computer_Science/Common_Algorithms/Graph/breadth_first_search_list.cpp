#include <iostream>
#include <queue>
#include <vector>

class Graph {
    int vertices;
    std::vector<std::vector<int>> adj;

   public:
    Graph(int v) {
        vertices = v;
        adj.resize(v);
    }

    void addEdge(int v, int w) { adj[v].push_back(w); }

    void bfs(int s) {
        std::vector<bool> visited(vertices, false);
        std::queue<int> q;

        visited[s] = true;
        q.push(s);

        while (!q.empty()) {
            s = q.front();
            std::cout << s << " ";
            q.pop();

            for (auto i = adj[s].begin(); i != adj[s].end(); ++i) {
                if (!visited[*i]) {
                    visited[*i] = true;
                    q.push(*i);
                }
            }
        }
    }
};

int main() {
    Graph g(4);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    std::cout << "BFS starting from vertex 2: ";
    g.bfs(2);
    std::cout << std::endl;

    return 0;
}
