#include <iostream>
#include <vector>
#include <list>
#include <stack>
using namespace std;

vector<vector<int>> li;
vector<bool> visited;
vector<int> container,level;
void addEdge(int a, int b){
    li[a].push_back(b);
}

vector<int> r_container;

void dfsHelper(int node){
   visited[node] = 1;
   container.push_back(node);
   for(auto nbr:li[node]){
    if(!visited[nbr]){
       visited[nbr] = 1;
       level[nbr] = level[node]+1;
       dfsHelper(nbr);  
    }
   }
 return;
}

int main(){
    int V, E;
    cout << "Enter Vertex Number" << endl;
    cin >> V;
    cout << "Enter Edge Number" << endl;
    cin >> E;

    // Initialize the li vector with V vertices
    li.resize(V + 1);
    visited.resize(V+1,0);
    level.resize(V+1,0);

    for (int i = 0; i < E; i++){
        cout << "Enter " << i + 1 << " Edge " << endl;
        int a, b;
        cin >> a >> b;
        addEdge(a, b);
    }

    cout << "Enter Source Node " << endl;
    int source;
    cin >> source;

    dfsHelper(source);


    cout << "DFS Traversal: ";
    for (auto cont : container)
    {
        cout << cont << " ";
    }
    cout << endl;

    cout << "Tree Level : ";
    for (auto lb : level)
    {
        cout << lb << " ";
    }
    cout << endl;

    return 0;
}
