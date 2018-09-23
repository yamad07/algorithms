#include <iostream>
int fact(int);

int
main(){
    int n;
    std::cin >> n;
    int answer = fact(n);
    std::cout << answer << "\n";

    return 0;
}

int
fact(int n){
    if (n == 0) return 1;
    return n * fact(n - 1);
}
