#include <iostream>
#define N 5
#define M 5

char field[N][M] = {
    {'W', '.', '.', '.', '.'},
    {'W', 'W', '.', '.', '.'},
    {'.', '.', '.', '.', '.'},
    {'W', '.', '.', 'W', 'W'},
    {'W', 'W', '.', '.', '.'},
};
void dfs(int, int);

int main(){
    int count = 1;
    for (int i = 0;i < N; i++){
        for(int j = 0;j < M; j++){
            if(field[i][j] == 'W'){
                dfs(i, j);
                count++;
            }
        }
    }

    std::cout << count << "\n";
    return 0;
}

void dfs(int x, int y){
    for (int dx = -1; dx <= 1; dx++){
        for (int dy = -1; dy <= 1; dy++){
            if(field[x + dx][y + dy] == 'W'){
                field[x + dx][y + dy] = '.';
                dfs(x + dx, y + dy);
            }
        }
    }
}
