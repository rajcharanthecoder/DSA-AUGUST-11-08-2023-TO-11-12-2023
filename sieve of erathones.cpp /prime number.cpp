#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n, int i = 2)
{
    // Base conditions
    if (n <= 2) {
        return (n == 2) ? true : false;
    }
    if (n % i == 0) return false; 
    
    if (i * i > n) return true;

    return isPrime(n, i + 1);
}

// Driver Program
int main()
{
    int n = 34;
    if (isPrime(n))
       cout << "Prime Number";
    else
       cout << "Not a Prime";

    return 0;
}
