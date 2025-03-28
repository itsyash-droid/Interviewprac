#include <bits/stdc++.h>

using namespace std;

void cavity_map(vector<string> &grid){
    vector<string> new_grid = grid;
    for(int i = 1;i<grid.size()-1;i++){
        for(int j = 1;j<grid.size()-1;j++){
            if(grid[i][j]>grid[i-1][j]&& grid[i][j]>grid[i+1][j] && grid[i][j] > grid[i][j-1] && grid[i][j] > grid[i][j+1]){
                new_grid[i][j] = 'X';
            }
    }
}
    
    for(int i=0;i<new_grid.size();i++){
        cout<<new_grid[i]<<endl;
    }
}

int main() {
    int n; // Number of rows/columns of the square grid
    cin >> n; // Reading the size of the grid

    vector<string> grid(n); // Vector to store grid rows as strings

    for (int i = 0; i < n; ++i) {
        cin >> grid[i]; // Reading each row as a string
    }

    cavity_map(grid);
    return 0;
}
