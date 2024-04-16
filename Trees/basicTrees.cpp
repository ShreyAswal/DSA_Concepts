#include <iostream>
using namespace std;

// A collection of nodes from which one node is taken as the root node and the rest of the nodes are divided into disjoint subsets...
// and each subset is a tree or a subtree.

// Formula to know how many un-named trees can be generated according to no of nodes = T(n) =  (2n^ C _n)/n+1; eg: T(5) = 2*5^ C _5/5+1 = ((10*9*8*7*6)/(5*4*3*2*1))/6 = 42;
// Formula to know how many named trees can be generated according to no of nodes = T(n) =  ((2n^ C _n)/n+1) * n!; eg: T(5) = (2*5^ C _5/5+1) * (5*4*3*2*1) = (((10*9*8*7*6)/(5*4*3*2*1))/6)*120 = 5040;
// Formula to calculate no of trees with maximum height = 2^n-1; eg: n=3 => 2^3-1 = 2^2 = 4; 

// Height starts from 0.
// Finding no of nodes using height.
// Min no of nodes using height n=h+1. eg: h=2 => min no of nodes n= 2+1 = 3;
// Max no of nodes using height GP series a+ar+ar^2+ar^3+ar^4+...+ar^k = a(r^k+1 - 1) / r-1 where a=1,r=2,k=h. 
// In short formula => n = 2^h+1 -1 eg: h=3 => max no of nodes n = 2^3+1 -1 = 2^4 - 1 = 16-1 = 15.
// No of nodes in binary tree => h+1 <= n <= 2^h+1 - 1.

// Finding height from no of nodes.
// Max height from no of nodes h = n-1. Eg: n=3, h = 3-1 = 2;
// Min height from no of nodes h = log_2(n+1) - 1. Eg: n=15, h = log_2(16) - 1
// Height of binary tree => log_2(n+1) - 1 <= h <= n-1

// no of nodes in degree 0 and degree 2 has a relation. (degree is the no of nodes a node has).
// deg(0) = deg(2) + 1;

// Binary tree can have {0,1,2} nodes.
// Strict binary tree has {0,2} nodes.

// In a STRICT binary tree finding no of nodes and height
// no of nodes from height : 
// min no of nodes from height => n =2h+1
// max no of nodes fron height => 2^h+1 - 1

// height from no of nodes:
// min height h = log_2(n+1) - 1
// max height h = (n-1)/2

// Relation between No of internal nodes and No of external nodes in STRICT Binary tree
// No of external nodes = No of internal nodes + 1

class Trees{


};

int main(){

};  