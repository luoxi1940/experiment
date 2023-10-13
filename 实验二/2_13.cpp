#include <iostream>
#include <vector>
using namespace std;

vector<int> primeFactorization(int N) {
    vector<int> factors;

    for (int i = 2; i <= N; i++) {
        while (N % i == 0) {
            factors.push_back(i);
            N /= i;
        }
    }

    return factors;
}

int main() {
    int N;
    cout << "������һ������N��";
    cin >> N;

    vector<int> factors = primeFactorization(N);

    cout << N << "�ı�׼�ֽ�ʽΪ��";
    for (int i = 0; i < factors.size(); i++) {
        cout << factors[i];
        if (i != factors.size() - 1) {
            cout << " * ";
        }
    }

    return 0;
}