#include <iostream>
#include <deque>

using namespace std;

/*

std::deque

deque는 배열 시퀀스로 구성된다.
vector와 흡사하다.

*/

int main(void){

    deque<int> deq{1,2,3,4};

    //기존 메서드는 vector와 동일
    cout << "deq: "; for(auto i : deq) cout << i << ", "; cout << endl;

    //push_front
    deq.push_front(0);
    cout << "push_front 이후 deq: "; for(auto i : deq) cout << i << ", "; cout << endl;

    //pop_front
    deq.pop_front();
    cout << "pop_front 이후 deq: "; for(auto i : deq) cout << i << ", "; cout << endl;

    //emplace_front(args...)
    deq.emplace_front(0);
    cout << "emplace_front 이후 deq: "; for(auto i : deq) cout << i << ", "; cout << endl;


    



}