#include <iostream>
#include <vector>

using namespace std;

int main(void){

    // make container, delete container

    //default
    vector<int> vec1;

    //range
    vector<int> vec2(vec1.begin(), vec1.end());

    //copy

    vector<int> vec3(vec2);
    vector<int> vec4 = vec2;

    //move
    vector<int> vec5(move(vec3));
    vector<int> vec6 = move(vec3);

    //initializer list

    vector<int> vec7 {1,2,3,4,5};
    vector<int> vec8 = {1,2,3,4,5};
 
    // destructor
    vec8.~vector();

    // element delete

    vec7.clear();

    // empty

    cout << "vec1.empty() : " << vec1.empty() << endl;

    // size
    vector<int> vec9 = {1,2,3,4,5};
    cout << "vec9.size(): " << vec9.size()<<endl;

    // max_size
    cout << "vec9.size(): " << vec9.max_size() << endl;

    // cont.size() == 0   (x)
    // cont.empty()       (o)

}