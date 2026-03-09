#include <iostream>
#include <string>

std::string get_log() {
    std::string login;
    std::cout << "Введите логин: ";
    std::getline(std::cin, login);
    return login;
}

std::string get_pass() {
    std::string password;
    std::cout << "Введите пароль: ";
    std::getline(std::cin, password);
    return password;
}

int main() {
    int select = 0;
    std::string user_log;
    std::string user_pass;
    bool running = true;

    setlocale(LC_ALL, "RU");

    while (running) {
        std::cout << "Выберите действие: " << std::endl;
        std::cout << "0 - Выход " << std::endl;
        std::cout << "1 - Регистрация " << std::endl;
        std::cout << "2 - Вход в аккаунт" << std::endl;
        //cout << "3-: " << endl;
        //cout << "4-: " << endl;
        std::cin >> select;
        switch (select)
        {
        case 0:
            running = false;
            break;

        case 2:
            user_log = get_log();
            user_pass = get_pass();
            break;
        }

    }

    return 0;
}