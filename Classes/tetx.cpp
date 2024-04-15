#include <iostream>
using namespace std;

class hack1 {
public:
    void show() {
        cout << "Ilovetocode";
    }
};

class hack2 : public hack1 {
public:
    void show() {
        cout << "Ilovetocodeonhackerearth";
    }
};

int main() {
    hack2 obj;
    obj.show();
    return 0;
}
