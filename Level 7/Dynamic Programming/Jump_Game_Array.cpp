/*
 * Given an array of non-negative integers, you are initially positioned at the first index of the array.

Each element in the array represents your maximum jump length at that position.

Determine if you are able to reach the last index.

For example:
A = [2,3,1,1,4], return 1 ( true ).

A = [3,2,1,0,4], return 0 ( false ).

Return 0/1 for this problem
 */


#include <iostream>
#include <vector>

using namespace std;

#define Rep(i, n) for(int i = 0;i<n;i++)

int canJump(vector<int> A) {
    int maximum = 0;
    Rep(i, A.size()) {
        maximum = max(maximum, i + A[i]);
        if (maximum == i)
            return 0;
    }
    return 1;
}

int main() {

    vector<int> A = {16, 0, 0, 0, 12, 1, 13, 1, 30, 0, 14, 0, 0, 3, 0, 0, 2, 0, 0, 0, 7, 0, 0, 0, 0, 16, 0, 14, 0, 22,
                     0, 0, 0, 5, 0, 0, 0, 0, 7, 0, 26, 0, 0, 13, 22, 0, 0, 0, 0, 22, 0, 0, 0, 16, 0, 0, 29, 0, 0, 0, 3,
                     0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 3, 0, 0, 0, 19, 0, 0,
                     15, 0, 0, 30, 0, 0, 0, 0, 0, 0, 12, 0, 19, 6, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 12, 0, 24, 16, 21,
                     0, 8, 0, 14, 6, 0, 0, 5, 23, 0, 22, 0, 15, 15, 0, 26, 0, 14, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                     16, 13, 0, 24, 0, 0, 16, 24, 0, 9, 0, 0, 0, 0, 0, 21, 0, 0, 25, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0,
                     0, 0, 24, 0, 0, 0, 0, 0, 30, 10, 0, 18, 30, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 29, 0, 0, 0, 8, 7,
                     29, 16, 30, 0, 0, 3, 0, 0, 0, 17, 0, 0, 22, 0, 0, 0, 0, 0, 18, 0, 0, 11, 11, 0, 0, 0, 0, 11, 19, 2,
                     0, 0, 0, 2, 0, 16, 11, 21, 0, 10, 0, 29, 0, 0, 0, 0, 0, 1, 15, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0,
                     29, 0, 9, 0, 6, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0,
                     0, 0, 11, 0, 0, 21, 0, 0, 0, 0, 4, 0, 0, 0, 0, 14, 21, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 21, 0,
                     0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 14, 0, 0, 0, 0, 29, 24, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0,
                     30, 0, 0, 0, 0, 0, 0, 0, 25, 0, 9, 0, 0, 0, 0, 24, 21, 12, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 29, 2,
                     0, 0, 0, 22, 9, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 8, 29, 19, 0, 0, 0, 14, 24, 0, 22, 0, 24, 0, 0, 5,
                     0, 0, 0, 28, 0, 0, 29, 0, 0, 27, 13, 0, 18, 0, 0, 0, 0, 11, 11, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0,
                     15, 0, 0, 0, 0, 0, 12, 0, 0, 12, 19, 23, 0, 20, 0, 8, 6, 23, 17, 14, 0, 0, 24, 3, 0, 0, 0, 6, 11,
                     24, 0, 0, 0, 0, 0, 0, 18, 0, 0, 1, 27, 0, 1, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 11, 16, 0, 0, 24, 25,
                     0, 0, 17, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 9, 19, 0, 0, 0, 0, 0, 0, 6, 0, 0, 5, 0, 15, 17, 14, 1, 27,
                     0, 0, 24, 16, 28, 0, 18, 0, 20, 20, 0, 29, 0, 2, 29, 0, 0, 17, 0, 30, 0, 0, 0, 0, 0, 29, 15, 0, 0,
                     0, 0, 0, 0, 0, 14, 0, 0, 16, 0, 0, 0, 0, 0, 0, 18, 20, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 21, 0, 6, 0,
                     0, 0, 0, 0, 0, 0, 0, 28, 11, 19, 0, 0, 25, 0, 0, 20, 0, 0, 0, 0, 0, 15, 0, 0, 6, 3, 4, 0, 0, 0, 0,
                     22, 0, 2, 0, 0, 0, 14, 0, 0, 5, 0, 18, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 9, 0, 20, 4, 28, 0, 0, 4, 0,
                     0, 3, 0, 3, 9, 3, 0, 6, 0, 0, 0, 0, 0, 0, 13, 0, 23, 0, 0, 16, 5, 0, 27, 4, 0, 28, 0, 0, 0, 0, 0,
                     0, 0, 5, 0, 24, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 4, 10, 28, 0, 0, 0, 22, 14, 8, 0, 0, 0, 0, 0, 0, 0,
                     0, 0, 0, 0, 19, 0, 21, 0, 30, 0, 0, 19, 0, 0, 0, 0, 7, 0, 22, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0,
                     13, 29, 18, 0, 0, 0, 0, 0, 0, 0, 0, 29, 30, 0, 0, 0, 28, 0, 0, 18, 26, 0, 0, 22, 0, 0, 0, 0, 0, 0,
                     0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 27, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 29, 16, 13, 0, 3, 0, 0, 11,
                     12, 7, 3, 0, 2, 0, 0, 16, 0, 0, 26, 0, 15, 0, 20, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 25, 3, 27, 0, 0, 0,
                     13, 0, 0, 0, 0, 22, 25, 0, 22, 25, 0, 17, 29, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 28, 8, 1, 0, 0,
                     0, 0, 0, 29, 15, 16, 0, 0, 0, 0, 0, 0, 23, 28, 0, 0, 0, 2, 0, 12, 27, 0, 22, 0, 0};

    cout << canJump(A);


}