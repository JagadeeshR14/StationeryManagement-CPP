#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define N 9999999
#define V 5
int G[V][V] = {
{0, 9, 75, 0, 0},
{9, 0, 95, 19, 42},
{75, 95, 0, 51, 66},
{0, 19, 51, 0, 31},
{0, 42, 66, 31, 0}
};
int main() {
int no_edge = 0;
int x = 0;
int y = 0;
int min, weight = 0;
int selected[V];
memset(selected, false, sizeof(selected));
selected[0] = true;
cout << "Prim's Algorithm " << endl;
while (no_edge < V - 1) {
min = N;
for (int i = 0; i < V; i++) {
if (selected[i]) {
for (int j = 0; j < V; j++) {
if (!selected[j] && G[i][j]) {
if (min > G[i][j]) {
min = G[i][j];
x = i;
y = j;
}
}
}
}
}
cout << "Edge " << x << " - " << y << " and its Weight " << G[x][y] << endl;
selected[y] = true;
no_edge++;
weight = weight + G[x][y];
}
cout << "Total weight of the graph is : " << weight << endl;
return 0;
}