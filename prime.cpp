// Sieve of eratosthenes 
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:    vector<int> sieveOfEratosthenes(int n) {
        vector<bool> prime(n + 1, true);
        prime[0] = prime[1] = false;
        for (int i = 2; i * i <= n; i++) {
            if (prime[i]) {
                for (int j = i * i; j <= n; j += i) {
                    prime[j] = false;
                }
            }
        }
        vector<int> primes;
        for (int i = 2; i <= n; i++) {
            if (prime[i]) {
                primes.push_back(i);
            }
        }
        return primes;
    }
    // Function to return number of prime numbers less than n
    int countPrimes(int n) {        if (n <= 2) return 0;
        vector<bool> prime(n, true);
        prime[0] = prime[1] = false;
        for (int i = 2; i * i < n; i++) {
            if (prime[i]) {                for (int j = i * i; j < n; j += i) {
                    prime[j] = false;
                }
            }
        }        int count = 0;
        for (int i = 2; i < n; i++) {
            if (prime[i]) {                count++;
            }        }
        return count;    }  
};
int main() {    int n;
    cout << "Enter a number: ";
    cin >> n;
    Solution solution;
    vector<int> primes = solution.sieveOfEratosthenes(n);
    cout << "Prime numbers up to " << n << ": ";
  
       
        cout<<solution.countPrimes(n)<<" ";
    
    cout << endl;
    return 0;}  