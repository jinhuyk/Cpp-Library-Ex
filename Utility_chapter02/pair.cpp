#include <iostream>
#include <utility>

using namespace std;

int main(void){

    // pair index 접근
    pair<int, int> pairEx(3,5);

    // pairEx.first , pairEx.secont 로 접근
    cout << "element access :" << pairEx.first << ", "<< pairEx.second<< endl;

    // get<>(pairEx) 로 접근
    cout << "element access by get<>:"<< get<0>(pairEx) << ", "<< get<1>(pairEx) << endl;

    //std::make_pair 
    // pair' helper function, it can infer type
    
    pair<const char*, double> charDoubPair = make_pair("pi", 3.14);
    auto CharDoubPairAuto = make_pair("pi",3.14);
    cout << "charDoubPair:" << charDoubPair.first << ", "<< charDoubPair.second<< endl;
    cout << "charDoubPairAuto :" << CharDoubPairAuto.first << ", "<< CharDoubPairAuto.second<< endl;

    // pair value change

    charDoubPair.first = "sqrt 2";
    charDoubPair.second = 1.41;
    cout << "changed charDoubPair:" << charDoubPair.first << ", "<< charDoubPair.second<< endl;
}