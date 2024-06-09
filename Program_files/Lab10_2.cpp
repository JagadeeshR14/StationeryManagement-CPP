#include <iostream> 
#include <bits/stdc++.h> 
using namespace std; class Graph {
int numVerOces; 
list<int>* adjLists; 
bool* visited; public:
Graph(int verOces);
void addEdge(int src, int dest); 
void BFS(int startVertex);
};
Graph::Graph(int verOces) {
numVerOces = verOces;
adjLists = new list<int>[verOces]; }
void Graph::addEdge(int src, int dest)
{ adjLists[src].push_back(dest);
adjLists[dest].push_back(src); }
void Graph::BFS(int startVertex)
{
visited = new bool[numVerOces]; 
for (int i = 0; i < numVerOces; i++)
visited[i] = false;
list<int> queue; visited[startVertex] = true; 
queue.push_back(startVertex); 
list<int>::iterator i;
while (!queue.empty()) {
int currVertex = queue.front();
cout << "Visited " << currVertex << "\n";
queue.pop_front();
for (i = adjLists[currVertex].begin(); 
i != adjLists[currVertex].end(); 
++i) {
int adjVertex = *i;
if (!visited[adjVertex]) {
visited[adjVertex] = true;
queue.push_back(adjVertex); 
}
} 
}
}
int main() {
int nn,i,no,dr;
cout<<"Enter the number of nodes in the graph : "<<endl;
cin>>nn; 
Graph g(nn);
for(i=0;i<nn;i++)
{
cout<<"Enter the values for the node with its directed node : "<<endl; cin>>no;
cin>>dr; 
g.addEdge(no, dr);
} 
g.BFS(5); 
return 0;
}
