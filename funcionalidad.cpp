#include <iostream>
using namespace std;

int main() {

    int v[100];

    for (int i = 0; i < 100; ++i){
        cout << "Pos #" << i < " ingrese el numero";
        
        int num;
        cin >> num;

        v[i] = num;
    }

    return 0;
}