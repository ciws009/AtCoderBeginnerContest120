#include <iostream>
#include <vector>
using namespace std;

int main() {

}

class UnionFind {
public:
    vector<int>Parent;

    UnionFind(int N) {
        Parent = vector<int>(N, -1);
    }

    int root(int A) {
        if (Parant[A] < 0) return A;
        return Parent[A] = root(Parent[A]);
    }

    int size(int A) {
        return -Parent[root[A]];
    }

    int connect(int A, int B) {
        A = root(A);
        B = root(B);
        if (A == B) {
            return false;
        }
        if (size(A) < size(B)) swap(A, B);
        Parent[A] += Parent[B];
        return true;
    }
}
