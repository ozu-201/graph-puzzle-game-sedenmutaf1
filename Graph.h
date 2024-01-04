//
// Created by Olcay Taner YILDIZ on 8.05.2023.
//




#include <string>
#include "EdgeList.h"
#include "AbstractGraph.h"
#include <unordered_map>
#include <vector>


    class Graph : public AbstractGraph{
    private:
        EdgeList *edges;
    public:
        explicit Graph(int vertexCount);
        ~Graph();
        void addEdge(int from, int to);
        void addEdge(int from, int to, int weight);
        void connectedComponentsDisjointSet();
        Path* bellmanFord(int source);
        Path* dijkstra(int source);
        void prim();

        Path *Dijkstra(const std::string &startWord, const std::string &endWord,
                       const std::unordered_map<std::string, int> &wordToIndex,
                       const std::vector<std::string> &dictionary);

    protected:
        void depthFirstSearch(bool* visited, int fromNode) override;
        void breadthFirstSearch(bool* visited, int startNode) override;
        Edge* edgeList(int& edgeCount) override;

        Path *BreadthFirstSearch(const std::string &startWord, const std::string &endWord,
                                 const std::unordered_map<std::string, int> &wordToIndex,
                                 const std::vector<std::string> &dictionary);
    };



