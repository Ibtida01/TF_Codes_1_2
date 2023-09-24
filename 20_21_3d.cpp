#include <iostream>
#include <iomanip>
using namespace std;
std::ostream& setup(std::ostream& out) {
    out<<setprecision(6)<<setfill('%')<<setw(10)<<left;
    return out;
}

int main() {
    cout<<setup<<(float)123.45678<<endl;
    return 0;
}
