#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        int linhas = grid.size();
        int colunas = grid[0].size();

        vector<pair<int, int>> direcoes = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

        vector<vector<int>> custo(linhas, vector<int>(colunas, INT_MAX));
        custo[0][0] = 0;

        priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<>> heap;
        heap.emplace(0, 0, 0);

        while (!heap.empty()) {
            tuple<int, int, int> atual = heap.top();
            heap.pop();

            int custoAtual = get<0>(atual);
            int x = get<1>(atual);
            int y = get<2>(atual);

            if (x == linhas - 1 && y == colunas - 1) return custoAtual;

            for (int i = 0; i < 4; ++i) {
                int nx = x + direcoes[i].first;
                int ny = y + direcoes[i].second;

                if (nx >= 0 && ny >= 0 && nx < linhas && ny < colunas) {
                    int novoCusto = custoAtual;
                    if (grid[x][y] != i + 1) {
                        novoCusto += 1;
                    }

                    if (novoCusto < custo[nx][ny]) {
                        custo[nx][ny] = novoCusto;
                        heap.emplace(novoCusto, nx, ny);
                    }
                }
            }
        }

        return -1;
    }
};