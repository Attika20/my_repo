// A.Distinct
#include <iostream>
using namespace std;
int main() {
 while(true){
    int a, b, c;
    cout << "Enter three numbers (between 1 and 10^4): ";
    cin >> a >> b >> c;
    if (!(1 <= a && a <= 10000) || !(1 <= b && b <= 10000) || !(1 <= c && c <= 10000)) {
    cout<<"Please enter correct value";
}
    break;
    if (a == b) {
        cout << "Distinct number: " << c << endl;
    } else if (a == c) {
        cout << "Distinct number: " << b << endl;
    } else if (b==c) {
        cout << "Distinct number: " << a << endl;
    }
    else{
        cout<<"It is necessary to have a value repeated twice";
    }
    return 0;
 }
}
