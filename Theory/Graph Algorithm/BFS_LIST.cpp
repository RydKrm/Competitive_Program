#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;

vector<vector<int>> li;

void addEdge(int a, int b){
    li[a].push_back(b);
}


int main(){
    int V, E;
    cout << "Enter Vertex Number" << endl;
    cin >> V;
    cout << "Enter Edge Number" << endl;
    cin >> E;

    // Initialize the li vector with V vertices
    li.resize(V+1);

    for (int i = 0; i < E; i++){
        cout << "Enter " << i + 1 << " Edge " << endl;
        int a, b;
        cin >> a >> b;
        addEdge(a, b);
    }

    cout << "Enter Source Node " << endl;
    int source;
    cin >> source;

    vector<bool> visited(V, false);
    queue<int> que;
    que.push(source);
    visited[source] = true;
    vector<int> container,level(V+1,0),parent(V+1,0);

    while (!que.empty()){
        int frt = que.front();
        container.push_back(frt);
        que.pop();

        for (int neighbor : li[frt]){
            if (!visited[neighbor]){
                que.push(neighbor);
                visited[neighbor] = true;
                level[neighbor] = level[frt]+1;
                parent[neighbor] = frt;
            }
        }
    }

    cout << "BFS Traversal: ";
    for (auto cont : container){
        cout << cont << " ";
    }
    cout<<endl;

    cout << "Tree Level : ";
    for (auto lb : level){
        cout << lb << " ";
    }
    cout<<endl;

    cout<<"Enter shortest path node "<<endl;
    int dest;
    cin>>dest;
    int temp = dest;
    cout<<"shorest Path "<<endl;
    while(temp!=source){
        cout<<temp<<"=>";
        temp = parent[temp];
    }
    cout<<source<<endl;

    return 0;
}
