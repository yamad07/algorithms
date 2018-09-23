#include <iostream>
#define MAX_N 1000

int memo[MAX_N + 1];
int fib(int);
int
main (){
    int n;
    std::cin >> n;

    int answer = fib(n);

    std::cout << answer << "\n";
    return 0;
}

// this is slow functio if n is a large number
// int
// fib(int n){
//     if (n <= 1) return n;
//     return fib(n - 1) + fib(n - 2);
// }

int fib(int n){
    if (n <= 1) return n;
    if (memo[n] != 0) return memo[n];
    return memo[n] = fib(n - 1) + fib(n - 2);
}
