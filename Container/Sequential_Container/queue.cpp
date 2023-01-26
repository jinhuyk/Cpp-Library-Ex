#include <iostream>
#include <queue>

using namespace std;

/*

std::queue

기존 순차 컨테이너에 대한 간결한 인터페이스 제공
STL알고리즘에서 사용 불가능
class templete로 사용되어 vector, list, deque를 매개변수로 지정

FIFO

시간복잡도: 상수시간

...

*/

int main(void){

    queue<int> myQueue;

    // push : element 삽입
    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);
    // cout << "myQueue: "; for(auto i : myQueue) cout << i << ", "; cout << endl; //불가능

    //front: 첫번째 원소 참조
    cout<< "myQueue.front(): "<<myQueue.front()<<endl;

    //back: 마지막 원소 참조
    cout<< "myQueue.back(): "<<myQueue.back()<<endl;

    //pop: 첫번째 원소 삭제
    myQueue.pop();
    cout<< "myQueue.pop() 이후 myQueue.front(): "<<myQueue.front()<<endl;

}