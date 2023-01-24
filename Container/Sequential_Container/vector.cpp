#include <iostream>
#include <vector>

using namespace std;

/*

std::vector

vector는 동형 컨테이너로, 원소를 메모리에 연속해서 저장
vector: 크기 != 용량

*/

int main(void){

    // vector 생성시 중괄호와 소괄호 주의
    vector<int> vec1(10);
    vector<int> vec2{10}; //initializer list로 해석
    
    cout<< "vec1: "; for(auto i : vec1) cout << i << ", ";
    cout<< endl << "vec2: "; for(auto i : vec2) cout << i << ", ";

    cout<< endl;
    
    

    // size: 현재 원소 개수
    cout << "vec1.size(): "<< vec1.size() <<endl;
    // capacity: 메모리 할당 없이 가질 수 있는 원소 개수
    cout << "vec1.capacity(): "<< vec1.capacity() << endl;
    //resize: 원소개수 증가
    cout << "resize 전 vec2.size(): "<< vec2.size() <<endl;
    vec2.resize(3);
    cout << "resize 후 vec2.size(): "<< vec2.size() <<endl;
    
    //reserve: 메모리 예약
    cout << "reserve 전 vec2.capacity(): "<<vec2.capacity() << endl;
    vec2.reserve(20);
    cout << "reserve 후 vec2.capacity(): "<<vec2.capacity() << endl;

    //shrink_to_fit: capacity fit size
    vec2.shrink_to_fit();
    cout << "shrink_to_fit 후 vec2.capacity(): "<<vec2.capacity() << endl;


    //insert

    //assign: 한개 이상 원소, 범위, initializer list 대입
    vec2.assign({1,2,3});
    cout << "assign 후 vec2: "; for(auto i : vec2) cout << i << ", "; cout << endl;

    //insert(pos, args...): pos  지점 앞에 args... 추가
    vec1.insert(vec1.end(),9);
    cout << "insert 후 vec1: "; for(auto i : vec1) cout << i << ", "; cout << endl;

    //emplace(pos, args...): pos 지점 앞에 args... 추가, return 생성된 원소 위치
    vec1.emplace(vec1.begin(), 3);
    cout << "emplace 후 vec1: "; for(auto i : vec1) cout << i << ", "; cout << endl;
    // * emplace(1,3) 형태는 지원 X

    //emplace_back(args) == emplace(vec1.end(), args..) 
    vec1.emplace_back(1);
    cout << "emplace_back 후 vec1: "; for(auto i : vec1) cout << i << ", "; cout << endl;
    
    //push_back: vector 끝에 추가
    vec1.push_back(1);
    cout << "push_back 후 vec1: "; for(auto i : vec1) cout << i << ", "; cout << endl;
    
    // c++11 이후 부터는 push_back 보다는 emplace_back을 선호 (속도 측면)
    
    //pop_back: 맨 마지막원소 삭제
    vec1.pop_back();
    cout << "pop_back 후 vec1: "; for(auto i : vec1) cout << i << ", "; cout << endl;

    //erase: 원소나, 범위 삭제
    vec1.erase(vec1.begin()+3,vec1.begin()+5);
    cout << "pop_back 후 vec1: "; for(auto i : vec1) cout << i << ", "; cout << endl;

    //clear: delete all element
    vec1.clear();
    cout << "clear 후 vec1.size(): "<< vec1.size() <<endl;

    



}