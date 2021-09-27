#include <iostream>
#include <csignal>
#include <conio.h>

/*
    Source by Programiz
    Modified For Learn by RK
    I.D.E : VS2019
*/

using namespace std;

sig_atomic_t sig_value = 0;

void handler(int sig) {
    sig_value = sig;
}

int main() {
    signal(SIGABRT, handler);
    cout << "Before signal handler is called" << endl;
    cout << "Signal = " << sig_value << endl;
    raise(SIGABRT);
    cout << "After signal handler is called" << endl;
    cout << "Signal = " << sig_value << endl;

    _getch();
    return 0;
}