#include <iostream>
#include <array>

using namespace std;

/*

std::array 

길이가 고정된 homogeneous container
vector와 같은 인터페이스를 가지고 있음
* 크기가 항상 정해져 있음


*/

int main(void){

    // 초기화되지 않음
    array<int, 5> arr1;
    
    //default로 초기화
    array<int, 10> arr2{};

    // 지정 부분 이외 default로 초기화
    array<int, 10> arr3{1,2,3,4,5};

    cout<< "arr1: "; for(auto i : arr1) cout << i << ", ";
    cout<< endl << "arr2: "; for(auto i : arr2) cout << i << ", ";
    cout<< endl <<  "arr3: "; for(auto i : arr3) cout << i << ", ";

    // error this.
    //cout<< "arr2: " << arr2 << endl;
    //cout<< "arr3: " << arr3 << endl;

    //index access

    cout << "arr3[2]: " << arr3[2] <<endl;
    cout << "arr3.at(2): " << arr3.at(2) << endl;
    cout << "get<2>(arr3): " << get<2>(arr3)<< endl;
}