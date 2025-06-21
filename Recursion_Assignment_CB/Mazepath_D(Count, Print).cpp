#include <bits/stdc++.h>
using namespace std;


void findPaths(int row, int col, int N1, int N2, string path, int &count) {
      if (row == N1 - 1 && col == N2 - 1) {
        cout << path << " ";
        count++;
        return;
    }
    if (row + 1 < N1) {
        findPaths(row + 1, col, N1, N2, path + "V", count);
    }
        if (col + 1 < N2) {
        findPaths(row, col + 1, N1, N2, path + "H", count);
    }
    if (row + 1 < N1 && col + 1 < N2) {
        findPaths(row + 1, col + 1, N1, N2, path + "D", count);
    }
}
int main() {
    int N1, N2;
    cin >> N1 >> N2;
    
    int count = 0;     
	findPaths(0, 0, N1, N2, "", count); 
    cout << endl << count << endl;
    return 0;
}


