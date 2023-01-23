#include <iostream>
#include <algorithm>
#

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

    /*
    
    min(a,b)
    min(a,b,comp)
    min(initializer_list)
    comp : predicate
    */

    // std::max  - return max value

    // two number
    cout << "max(2011,2014):" << max(2011,2014) << endl;

    // two string
    cout << "max(first,second): " << max(first, second) << endl;

    // array
    cout << "max({3,1,2011,2014,-5}): " << max({3,1,2011,2014,-5}) << endl;

    cout << endl;

    /*
    
    max(a,b)
    max(a,b,comp)
    max(initializer_list)
    comp : predicate
    */

    // std::minmax - return min-max pair

    auto pairInt= std::minmax(2011,2014);
    auto pairStr = std::minmax(first, second);
    auto pairArr = std::minmax({3,1,2011,2014,-5});

    cout << "pair Int minmax: " << pairInt.first <<", "<< pairInt.second<<endl;
    cout << "pair String minmax: " << pairStr.first <<", "<< pairStr.second<<endl;
    cout << "pair Arr minmax : " << pairArr.first <<", "<< pairArr.second<<endl;

    /*
    
    minmax(a,b)
    minmax(a,b,comp)
    minmax(initializer_list)
    comp : predicate
    */

   
}


