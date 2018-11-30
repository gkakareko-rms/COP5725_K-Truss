/***********************************************
Grzegorz Kakareko
Florida State University
College of Engineering
2525 Pottsdamer Street, Tallahassee, FL 32310
Email: gk15b@my.fsu.edu - Phone: +1-850-570-4683
************************************************/
#ifndef K_TRUSS
#define K_TRUSS

#include <fstream>
#include <iostream>
#include <ctime>
#include <string>
#include <cstring>
#include <map>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

class k_truss
{
    struct Edge 
    {
        int u,v;

        friend bool operator<(Edge e1, Edge e2) 
        {
            return e1.u<e2.u || (e1.u==e2.u && e1.v<e2.v);
        }
    };

    string filename;
    ofstream file_out;
    string infile, outfile;
    string path;
    string path_name;

    int n, m;
    vector<int> mapto;
    vector<int> deg, bin;
    vector<Edge> binEdge;
    vector<vector<int>> A;
    vector<map<int,int>> Adj, pos;

    int cntClass[1000];
    int gx;
    int gy;
    void init_Adj();
    bool compVertex( int i,  int j);
    void updateSupport(int u, int v, int delta);
    void printClass(int u, int v, int cls);
    void removeEdge(int u, int v);
    void orderPair(int &u, int &v);
    int getSum();
    void intersect(const vector<int> &a, const vector<int> &b, vector<int> &c);
    void init_Adj_pub();
    void reorder();
    void countTriangles();
    void binSort();
    void trussDecomp();
    void updateEdge(int u, int v, int minsup);
    void print_k_truss();
public:
    k_truss(string fn);
    ~k_truss(); 
    string improved_truss_decomp();    
    string top_down_decomp();
    void binSort_top_down();
    void trussDecomp_top_down();

};
#endif