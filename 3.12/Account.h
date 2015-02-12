
class Account{
public:
    Account(int amount);
    void credit(int amount);
    void debit(int amount);
    int getBalance();
private:
    int balance;
};
