#include <iostream>
using namespace std;

int main() {
    string script = R"(
// variables
int count = 10;
float temperature = 98.6;

// main logic
cout << "Count is " << count << endl;
cout << "Temperature is " << temperature << endl;
)";
    cout << script << endl;
    return 0;
}
