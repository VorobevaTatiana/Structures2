#include <iostream>
struct bank {
    int account;
    std::string name;
    double sum;
};
void change_account(bank& bk, int& new_sum)
{
    bk.sum = new_sum;
    std::cout << "Ваш счет:" << bk.name << ", " << bk.account << ", " << new_sum << std::endl;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");

    int new_sum;

    struct bank arg;
    std::cout << "Введите номер счета:";
    std::cin >> arg.account;
    std::cout << "Введите имя:";
    std::cin >> arg.name;
    std::cout << "Введите баланс счета:";
    std::cin >> arg.sum;
    std::cout << "Введите новый баланс счета:";
    std::cin >> new_sum;

    change_account(arg, new_sum);
              
}