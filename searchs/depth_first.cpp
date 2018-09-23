#include <iostream>

int n = 4;
int a[4] = {3, 4, 7};
int k = 13;

bool dfs(int, int);

int
main(){
    if(dfs(0, 0)) std::cout <<  "Yes";
    else std::cout << "NO";
}

bool
dfs(int i, int sum){
    if (i == n) return sum == k;

    if(dfs(i + 1, sum)) return true;

    if(dfs(i + 1, sum + a[i])) return true;

    return false;
}
