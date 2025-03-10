#include <iostream>
#include <vector>
using namespace std;

// Possible moves of a knight
int rowMoves[] = {-2, -1, 1, 2, 2, 1, -1, -2};
int colMoves[] = {1, 2, 2, 1, -1, -2, -2, -1};

// Function to check if a knight can be placed at board[row][col]
bool isSafe(vector<vector<int>> &board, int row, int col, int N) {
    for (int i = 0; i < 8; i++) {
        int newRow = row + rowMoves[i];
        int newCol = col + colMoves[i];

        if (newRow >= 0 && newRow < N && newCol >= 0 && newCol < N && board[newRow][newCol] == 1) {
            return false; // Another knight is attacking
        }
    }
    return true;
}

// Recursive function to place knights and find all solutions
void solveKnights(vector<vector<int>> &board, int knightsPlaced, int N, int row, int col) {
    if (knightsPlaced == N) { // Base case: All knights placed successfully
        // Print the valid board configuration
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << (board[i][j] ? "K " : ". ");
            }
            cout << endl;
        }
        cout << endl;
        return;
    }

    // Try placing the knight on each cell (row-wise)
    for (int i = row; i < N; i++) {
        for (int j = (i == row ? col : 0); j < N; j++) {
            if (isSafe(board, i, j, N)) {
                board[i][j] = 1; // Place knight

                // Move to the next column or row to place the next knight
                solveKnights(board, knightsPlaced + 1, N, i, j + 1);

                board[i][j] = 0; // Backtrack
            }
        }
    }
}

// Function to start solving the problem
void placeKnights(int N) {
    vector<vector<int>> board(N, vector<int>(N, 0)); // Initialize board with 0
    solveKnights(board, 0, N, 0, 0);
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    placeKnights(N);
    return 0;
}
