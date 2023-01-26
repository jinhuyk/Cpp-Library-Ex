#include <iostream>
#include <queue>

using namespace std;

/*

std::priority_queue

queue의 간소화버전으로 가장 큰 원소를 항상 우선순위 큐의 top에 둔다. 
default 비교 연산자: std::less

시간복잡도: 로그FIFO

시간복잡도: 상수시간
...

*/

int main(void){

    priority_queue<int> mypQueue;

    // push : element 삽입
    mypQueue.push(1);
    mypQueue.push(2);
    mypQueue.push(3);
    // cout << "myQueue: "; for(auto i : myQueue) cout << i << ", "; cout << endl; //불가능

    //front: 첫번째 원소 참조
    cout<< "mypQueue.top(): "<<mypQueue.top()<<endl;

    //pop: 첫번째 원소 삭제
    mypQueue.pop();
    cout<< "mypQueue.pop() 이후 mypQueue.front(): "<<mypQueue.top()<<endl;

}