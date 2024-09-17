#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int hour;
    cout << "Введіть годину (0-23): ";
    cin >> hour;
    if (hour < 0 || hour > 23) {
        cout << "Невірний формат часу. Введіть число від 0 до 23\n";
    } 
    else {
        if (hour >= 6 && hour < 12) {
            cout << "Це ранок\n";
        } 
        else if (hour >= 12 && hour < 18) {
            cout << "Це день\n";
        } 
        else if (hour >= 18 && hour < 22) {
            cout << "Це вечір\n";
        } 
        else {
            cout << "Це ніч\n";
        }
    }
}
