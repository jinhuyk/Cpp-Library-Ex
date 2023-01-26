#include <iostream>
#include <stack>

using namespace std;

/*

std::stack

기존 순차 컨테이너에 대한 간결한 인터페이스 제공
STL알고리즘에서 사용 불가능
class templete로 사용되어 vector, list, deque를 매개변수로 지정

시간복잡도: 상수시간

...

*/

int main(void){

    stack<int> myStack;

    // push : element 삽입
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    // myStack : top- 3- 2- 1
    // cout << "myStack: "; for(auto i : myStack) cout << i << ", "; cout << endl; //불가능

    //top: stack의 맨 위 원소를 참조
    cout << "myStack top: "<< myStack.top()<<endl;

    //pop: stack의 맨 위원소를 삭제
    myStack.pop();
    cout << "pop 후 myStack top: "<< myStack.top()<<endl;

}