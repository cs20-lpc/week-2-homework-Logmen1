#include <iostream>
#include <string>

using namespace std;


template <typename T>
class Box {
private:
    T value;

public:
    // TODO: Constructor
    Box(T val) {
        value = val;
    }
    // TODO: setValue
    void setValue(int val) {
        value = val;
    }
    // TODO: getValue
    T getvalue() const {
        return value;
    }

    // TODO: print
    void print() const {
        cout << "the value is " << value << endl;
    }
};

int main()
{
  Box<int> intBox(10);
  Box<double> doubleBox(3.14);
  Box<string> stringBox("CS20");

  intBox.print();
  doubleBox.print();
  stringBox.print();
}
