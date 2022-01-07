#include <bits/stdc++.h>
using namespace std;
// create a function that checks if the number is prime
bool isPrime(int n)
{

    if (n == 3) {
        return true;
    }
    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
  
    for (int i = 5; i * i <= n; i = i + 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
  
    return true;
}

int main() {
    int T; 
    scanf("%d", &T);
    for(int i = 0; i < T; ++i) {
        int N;
        scanf("%d", &N);
        for(int j = 3; j <= N; ++j) {
            if(isPrime(j) && isPrime((N * 2) - j)) {
               printf("%d %d\n", j, (N * 2) - j);
               break;
            }
        }
    }
}