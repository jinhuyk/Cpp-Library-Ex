#include <iostream>
#include <forward_list>

using namespace std;

/*

std::forward_list

단일 연결 리스트이고, std::list와 유사

단일 리스트이기 때문에 반복자는 정방향으로만 진행, 즉 it-- 같은 역방향 반복자 사용 불가능 

sequential_container 중에서 size를 사용 불가능


*/

int main(void){

    forward_list<int> forw;

    forw.push_front(1);
    forw.push_front(2);
    forw.push_front(3);
    forw.push_front(4);

    cout << "forw: "; for(auto i : forw) cout << i << ", "; cout << endl;

    //정방향 반복자 사용
    cout << "forw: "; for( auto it = forw.cbegin();it != forw.cend();it++) cout << *it << ", "; cout << endl;
    
    // 역방향 진행은 불가능
    // cout << "forw: "; for( auto it = forw.end();it != forw.begin();it--) cout << *it << ", "; cout << endl;

    //* begin과 cbegin 차이: cbegin은 const로 반복자를 통해 값 변경을 불가능하게 한다. 다음코드는 const가 없는 상태고 그 밑에 에러코드는 const가 있는 상태이다.
    cout << "forw: "; for( auto it = forw.begin();it != forw.end();it++) *it += 1; cout << endl;

    // cbegin, cend는 반복자를 통해 값 변경 불가능
    //cout << "forw: "; for( auto it = forw.cbegin();it != forw.cend();it++) *it += 1; cout << endl;
    
    




}