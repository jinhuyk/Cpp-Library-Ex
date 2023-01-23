#include <iostream>
#include <vector>
#include <utility>
using namespace std;
template <typename T>

void swap(T& a, T&b){
    T tmp(move(a));
    a = move(b);
    b = move(tmp);


    // no copy.
}
int main(void){

    // std::move - resource move by compiler

    vector<int> myBigVec(10000000,2011);
    vector<int> myVec;
    myVec = myBigVec; // copy semantics
    myVec = move(myBigVec); // move semantics

    // move semantics >>>>>>>> copy semantics

    // std::forward - 주어진 인수를 그대로 전달하는 함수 템플릭 작성

    // std::swap - two object change

    string a{"Mun"};
    string b{"Jinhuyk"};

    cout << " before swap : " << a <<", "<< b<<endl;
    swap(a,b);
    cout << " after swap : " << a <<", "<< b<<endl;

}