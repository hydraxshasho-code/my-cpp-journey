#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;
    int count;

public:
    BankAccount(int account) {
        balance = account;
        count = 0;
    }

    void deposits(int amount) {
        balance += amount;
    }

    void withdraw(int amount) {
        if (amount <= balance) {
            balance = balance - amount;
        } else {
            count++;
        }
    }

    int getBalance() {
        return balance;
    }

    int getwith() {
        return count;
    }
};

int main() {
    int account, n;
    cin >> account >> n;

    BankAccount b(account);

    for (int i = 0; i < n; i++) {
        char op;
        int amount;
        cin >> op >> amount;

        if (op == 'D') {
            b.deposits(amount);
        } else if (op == 'W') {
            b.withdraw(amount);
        }
    }

    cout << b.getBalance() << " " << b.getwith();
    return 0;
}
