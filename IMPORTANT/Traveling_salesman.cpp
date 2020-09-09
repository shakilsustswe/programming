///cpp program to implement traveling salesman
///naive approach.
#include<bits/stdc++.h>
using namespace std;
#define v 4
int travllingSalessmanProblem(int graph[][v],int s)
{
    ///store all vertex apart from source vertex
    vector<int>vertex;
    for(int i=0; i<v; i++)
    {
        if(i!=s)
            vertex.push_back(i);
    }
    ///store current path weight
    int min_path=INT_MAX;
    do
    {
        //store current path weight
        int current_pathweight=0;
        ///compute current path weight
        int k=s;
        for(int i=0; i<vertex.size(); i++)
        {
            current_pathweight+=graph[k][vertex[i]];
            k=vertex[i];
            cout<<current_pathweight<<" ";
        }
        cout<<endl;
        current_pathweight+=graph[k][s];
        ///update minimum
        min_path=min(min_path,current_pathweight);
    }
    while(next_permutation(vertex.begin(),vertex.end()));

        return min_path;
}
int main()
{
    int graph[][v]= {{0,16,11,6},{8,0,13,16},
        {4,7,0,9},{5,12,2,0}
    };
    int s=0;
    cout<<travllingSalessmanProblem(graph,s)<<endl;
}
