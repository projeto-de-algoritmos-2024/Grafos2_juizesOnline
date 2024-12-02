#include <iostream>
#include <queue>
#include <vector>
#include <climits>
using namespace std;

struct State {
    int x, y, keys, cost;

    bool operator>(const State& other) const {
        return cost > other.cost;
    }
};

const vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

int dijkstra(const vector<string>& maze, int startX, int startY, int rows, int cols) {
    priority_queue<State, vector<State>, greater<State>> pq;
    vector<vector<vector<bool>>> visited(rows, vector<vector<bool>>(cols, vector<bool>(1 << 7, false)));

    pq.push({startX, startY, 0, 0});

    while (!pq.empty()) {
        State current = pq.top();
        pq.pop();

        int x = current.x, y = current.y, keys = current.keys, cost = current.cost;

        if (maze[x][y] == '*') {
            return cost;
        }

        if (visited[x][y][keys]) continue;
        visited[x][y][keys] = true;

        for (auto [dx, dy] : directions) {
            int nx = x + dx, ny = y + dy;

            if (nx < 0 || nx >= rows || ny < 0 || ny >= cols) continue;

            char cell = maze[nx][ny];

            if (cell == '#') continue;

            int newKeys = keys;

            if (cell >= 'a' && cell <= 'g') {
                newKeys |= (1 << (cell - 'a'));
            }

            if (cell >= 'A' && cell <= 'G') {
                if (!(newKeys & (1 << (cell - 'A')))) continue;
            }

            pq.push({nx, ny, newKeys, cost + 1});
        }
    }

    return -1;
}

int main() {
    vector<string> maze;
    string line;
    int startX = -1, startY = -1, rows = 0, cols = 0;

    while (getline(cin, line)) {
        maze.push_back(line);
        if (startX == -1) {
            for (int i = 0; i < line.size(); ++i) {
                if (line[i] == '@') {
                    startX = rows;
                    startY = i;
                }
            }
        }
        ++rows;
    }
    cols = maze[0].size();

    int result = dijkstra(maze, startX, startY, rows, cols);

    if (result == -1)
        cout << "--" << endl;
    else
        cout << result << endl;

    return 0;
}
