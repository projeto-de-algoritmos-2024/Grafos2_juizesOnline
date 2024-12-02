#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int, int>>> grafo(n + 1);
        for (int i = 0; i < times.size(); i++) {
            int origem = times[i][0];
            int destino = times[i][1];
            int peso = times[i][2];
            grafo[origem].emplace_back(destino, peso);
        }
    
        vector<int> tempoMin(n + 1, INT_MAX);
        tempoMin[k] = 0;

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> heap;
        heap.emplace(0, k);

        while (!heap.empty()) {
            pair<int, int> atual = heap.top();
            heap.pop();

            int tempoAtual = atual.first;
            int no = atual.second;

            if (tempoAtual > tempoMin[no]) continue;

            for (int i = 0; i < grafo[no].size(); i++) {
                int vizinho = grafo[no][i].first;
                int peso = grafo[no][i].second;
                if (tempoAtual + peso < tempoMin[vizinho]) {
                    tempoMin[vizinho] = tempoAtual + peso;
                    heap.emplace(tempoMin[vizinho], vizinho);
                }
            }
        }

        int resposta = -1;
        for (int i = 1; i < tempoMin.size(); i++) {
            if (tempoMin[i] > resposta) resposta = tempoMin[i];
        }

        if (resposta == INT_MAX) return -1;
        else return resposta;
    }
};