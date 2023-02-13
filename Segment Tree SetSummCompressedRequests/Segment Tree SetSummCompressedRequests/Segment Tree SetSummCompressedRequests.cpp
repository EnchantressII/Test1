#include<vector>
#include<iostream>
#include<string>
#include<algorithm>
#include<set>

using namespace std;
#define ll long long
#define int long long

struct Node
{
    Node* left = NULL, * right = NULL;
    int value = 0, push = 0, cntOfZeros = 0;
    Node() { value = 0; }

    Node(int value, int cntOfZeros)
    {
        this->value = value;
        this->cntOfZeros = cntOfZeros;
    }

    Node(Node* left, Node* right)
    {
        this->value = left->value + right->value;
        this->cntOfZeros = left->cntOfZeros + right->cntOfZeros;
        this->left = left;
        this->right = right;
    }
};

Node* build(int n)
{
    return new Node(0, n);
}



signed main() {
    int n;
    cin >> n;
    SegmentTree st = {n};
    cout << st.st->cntOfZeros;
    
}

