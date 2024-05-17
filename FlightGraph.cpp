//creating a graph to show all flights to and from cities
//vertex is a city
//Edge represents plane flight between cities

#include <iostream>
#include <vector>

using namespace std;

class Vertex{
  public:
    string label;
    Vertex(const string& vertexLabel){
      label = vertexLabel;
    }
};

class Edge{
  public:
    Vertex* fromVertex;
    Vertex* toVertex;
    double weight;

    Edge(Vertex* from, Vertex* to, double edgeWeight){
      fromVertex = from;
      toVertex = to;
      weight = edgeWeight;
    }
};

int main(){
  cout << "Test Flights" << endl;
  cout << "Hello world" << endl;
  return 0;
}
