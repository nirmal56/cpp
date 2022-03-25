#include<iostream>
#include<vector>
using namespace std;

struct edge{
    int src,dest,weight;
};

typedef pair<int,int>Pair;

class Graph{
    public:
    vector<vector<Pair>>adjlist;
    Graph (vector<edge> const &edges, int n){
        adjlist.resize(n);
        for(auto &edge: edges){
            int src=edge.src;
            int dest =edge.dest;
            int weight = edge.weight;
            adjlist[src].push_back(make_pair(dest,weight));
        }
    }
};

void printgraph(Graph const &graph, int n){
    for(int i=0;i<n;i++){
        for(Pair v:graph.adjlist[i]){
            cout<<"("<<i<<","<<v.first<<","<<v.second<<")";
        }
        cout<<endl;
    }
}

int main(){
    vector <edge> edges{{0,1,6},{1,2,7},{2,0,5},{2,1,4},{3,2,10},{5,4,1},{4,5,3}};
    int n=6;
    Graph graph (edges,n);
    printgraph(graph,n);
}