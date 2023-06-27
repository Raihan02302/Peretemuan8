#include <iostream>

using namespace std;

enum ThrottlePesawat{
  IDLE = 5,
  CLIMB = 70,
  CRUISE = 100,
  DESCENT = 40
};

int main(){

    ThrottlePesawat var1;

    var1 = IDLE;
    cout << "Throttle IDLE: " << var1 << endl;

    var1 = CLIMB;
    cout << "Throttle CLIMB: " << var1 << endl;

    var1 = CRUISE;
    cout << "Throttle CRUISE: " << var1 << endl;

    return 0;
}
