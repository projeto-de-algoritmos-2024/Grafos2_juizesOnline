#include <iostream>
#include <vector>
#include <queue>
#include <limits>
using namespace std;

struct Edge {
    int to, weight;
};

int prim(const vector<vector<Edge>>& graph, int n) {
    vector<bool> inMST(n + 1, false);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    int totalWeight = 0;
    int edgesAdded = 0; 

    pq.push({0, 1});

    while (!pq.empty() && edgesAdded < n) {
        auto [weight, u] = pq.top();
        pq.pop();

        if (inMST[u]) continue;

        inMST[u] = true;
        totalWeight += weight;
        edgesAdded++;

        for (const Edge& e : graph[u]) {
            if (!inMST[e.to]) {
                pq.push({e.weight, e.to});
            }
        }
    }

    if (edgesAdded < n) return -1;
    return totalWeight;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    while (cin >> n >> m) {
        vector<vector<Edge>> graph(n + 1);

        for (int i = 0; i < m; ++i) {
            int a, b, c;
            cin >> a >> b >> c;
            graph[a].push_back({b, c});
            graph[b].push_back({a, c});
        }

        int result = prim(graph, n);

        if (result == -1) {
            cout << "impossivel\n";
        } else {
            cout << result << '\n';
        }
    }

    return 0;
}
