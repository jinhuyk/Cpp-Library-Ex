#include <iostream>
#include <algorithm>


using namespace std;

int main(void){

    // std::min  - return min value

    // two number
    cout << "min(2011,2014):" << min(2011,2014) << endl;

    // two string
    string first{"first"};
    string second{"second"};

    cout << "min(first,second): " << min(first, second) << endl;

    // array
    cout << "min({3,1,2011,2014,-5}): " << min({3,1,2011,2014,-5}) << endl;

    cout << endl;
}


