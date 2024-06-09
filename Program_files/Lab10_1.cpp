#include <iostream> 
#include <bits/stdc++.h> 
using namespace std; class Graph {
int V; 
list<int>* adj;
void topologicalSortU;l(int v, bool visited[], stack<int>& Stack);
public:
Graph(int V);
void addEdge(int v, int w);
void topologicalSort(); };
Graph::Graph(int V)
{
this->V = V;
adj = new list<int>[V]; }
void Graph::addEdge(int v, int w)
{
adj[v].push_back(w);
}
void Graph::topologicalSortU;l(int v, bool visited[], stack<int>& Stack)
{
visited[v] = true;
list<int>::iterator i;
for (i = adj[v].begin(); i != adj[v].end(); ++i)
if (!visited[*i])
topologicalSortU;l(*i, visited, Stack); Stack.push(v);
}
void Graph::topologicalSort()
{
stack<int> Stack;
bool* visited = new bool[V]; for(inti=0;i<V;i++)
visited[i] = false; for(inti=0;i<V;i++)
if (visited[i] == false)
topologicalSortU;l(i, visited, Stack);
while (Stack.empty() == false) { cout<<Stack.top()<<" ";
Stack.pop(); }
}
int main()
{
int nn,i,no,dr;
cout<<"Enter the number of nodes in the graph : "<<endl;
cin>>nn; Graph g(nn);
for(i=0;i<nn;i++)
{
cout<<"Enter the values for the node with its directed node : "<<endl; cin>>no;
cin>>dr; g.addEdge(no, dr);
}
cout<<"Topological Sort for the given graph is : "<<endl; g.topologicalSort();
return 0; }