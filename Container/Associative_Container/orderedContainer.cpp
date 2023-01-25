#include <iostream>
#include <map>
#include <set>

using namespace std;
/*

map, set은 정렬연관컨테이너에 속한다.

std::map - <key, value> 가 쌍으로 묶여져있음.

std::map 과 std::set은 기본적으로 값이 들어오면 정렬이 된다.


*/

int main(void){

    multiset<int> intSet{1,1,3,3,5,7,9,2,4,6,8,10,4,5,6,7,8,3,3,4,5,6,6};

    // ordered 
    cout << "intSet: "; for(auto i : intSet) cout << i << " "; cout << endl;

    //count: key에 연관된 값의 개수 return

    cout << "intSet.count(6): " << intSet.count(6) << endl; // 1

    //find: 주어진 key에 대한 반복자를 리턴한다.
    cout << "*intSet.find(6): " << *intSet.find(10) << endl;

    // key가 없다면 end() 반복자를 리턴한다.
    cout << "*intSet.find(42): " << *intSet.find(42) << endl;

    //lower_bo8und(key) : key를 넣을 첫번째 위치에 대한 반복자 리턴
    //upper_bound(key) : key를 넣을 마지막 위치에 대한 반복자 리턴

    intSet.erase(intSet.lower_bound(3),intSet.upper_bound(3)); // 3을  전부 삭제 
    cout << "intSet: "; for(auto i : intSet) cout << i << " "; cout << endl;

    //equal_range(key): lower_bound, upper_bound 범위를 pair로 리턴

    map<int, string> int2Str{{1,"one"},{4,"four"},{2,"two"}};

    // key 값에 따라 정렬
    cout << "int2Str: "; for(auto i : int2Str) cout <<"{"<<i.first << ": "<<i.second<<"} "; cout << endl;

    //[], at사용가능

    cout<< "int2Str[2]: " <<int2Str[2]<<endl;
    cout<< "int2Str.at(2): " <<int2Str.at(2)<<endl;

    








}

