#include <iostream>
using namespace std;

int main() {
    int velocity[10];

    for (int i = 0; i < 10; i++) {
        cin >> velocity[i];
    }
jhgjgjh
    for (int i = 0; i < 10; i++) {
        velocity[i] = -velocity[i];
    }

    cout << "Velocities after gravity reversals are: ";
    for (int i = 0; i < 10; i++) {
        cout << velocity[i] << " ";
    }

    return 0;
}
