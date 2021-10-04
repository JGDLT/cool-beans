#include<iostream>
using namespace std;

int main() {

    char input = 'a';
    while (input != 'q') {
        cout << "press any key to continue, 'q' to quit." << endl;
        cin >> input;


        cout << "press'a' for a playstation" << endl;
        cout << "press'b' for xbox" << endl;
        cout << "press'c' for Pc" << endl;
        cin >> input;
        switch (input) {
        case 'a':
            cout << "Heres your ps5!" << endl;
            break;
        case 'b':
            cout << "Here is your Xbox series x!" << endl;
            break;
        case 'c':
            cout << "Go touch some grass!!!" << endl;
            break;
        default:
            cout << "not an option, dummy." << endl;
        }
    }
}
