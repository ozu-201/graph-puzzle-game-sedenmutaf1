//
// Created by sm034353 on 12/14/2023.
//

#include "main.h"
#include "Graph.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <unordered_map>

using namespace std;
bool differOneLetter( const string& word1 , const string& word2){
    int differCount=0;
    for(int i = 0; i<word1.length();i++){
        if(word1[i]!=word2[i]){
            differCount++;
        }

    }
    return differCount==1;
}
vector<string> readDictionary(const string& fileName){
    vector<string> words;
    ifstream file(fileName);
    if(!file.is_open()){
        cerr<<"Error opening file:" + fileName<<endl;
        exit(EXIT_FAILURE);
    }
    string line;
    while(getline(file,line)){
        istringstream ss(line);
        string word;
        while(ss>>word){
            words.push_back(word);
        }
    }
    file.close();
    return words;

}


int main(){

    Graph threeGraph = Graph(83000);
    Graph fourGraph = Graph(83000);
    Graph fiveGraph = Graph(83000);

    string dictionaryFileName="dictionary.txt";

    vector<string> dictionary = readDictionary(dictionaryFileName);

    unordered_map<string, int> wordToIndex;

    int index=0;

    for(const auto& word:dictionary){
        wordToIndex[word]=index++;
    }

    for(int i=0;i<dictionary.size();i++){

        for(int j=i+1;j<dictionary.size();j++){

            if(dictionary[i].length()==dictionary[j].length()&& differOneLetter(dictionary[i],dictionary[j])){

                int index1=wordToIndex[dictionary[i]];

                int index2=wordToIndex[dictionary[j]];

                switch(dictionary[i].length()){

                    case 3:
                        if(index1<dictionary.size()&&index2<dictionary.size()){
                            threeGraph.addEdge(index1,index2);
                        }

                        break;

                    case 4:
                        if(index1<dictionary.size()&&index2<dictionary.size()){
                            fourGraph.addEdge(index1,index2);
                        }

                        break;

                    case 5:
                        if(index1<dictionary.size()&&index2<dictionary.size()){
                            fiveGraph.addEdge(index1,index2);
                        }

                        break;
                }
            }
        }
    }


    return 0;
}