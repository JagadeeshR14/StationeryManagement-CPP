#include <iostream> 
#include <bits/stdc++.h> 
using namespace std; 
class Graph {
int VerNces; 
list<int> *adjLists; 
bool *visited;
public:
Graph(int V);
void addEdge(int src, int dest); 
void DFS(int vertex);
};
Graph::Graph(int verNces) {
VerNces = verNces;
adjLists = new list<int>[verNces]; 
visited = new bool[verNces];
}
void Graph::addEdge(int src, int dest) {
adjLists[src].push_front(dest); 
}
void Graph::DFS(int vertex) { 
visited[vertex] = true;
list<int> adjList = adjLists[vertex]; 
cout << vertex << " "; 
list<int>::iterator i;
for (i = adjList.begin(); i != adjList.end(); ++i) 
if (!visited[*i])
DFS(*i); 
}
int main() {
int nn,i,no,dr;
cout<<"Enter the number of nodes in the graph : "<<endl; 
cin>>nn;
Graph g(nn); 
for(i=0;i<nn;i++)
{
cout<<"Enter the values for the node with its directed node : "<<endl; 
cin>>no;
cin>>dr; 
g.addEdge(no, dr);
}
g.DFS(5);
return 0; 
}