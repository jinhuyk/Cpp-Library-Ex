#include <iostream>
#include <list>

using namespace std;

/*

std::list
이중 연결 리스트이다.
vector와 deque와 비슷하지만 기능은 다름 -> 구조가 다르기 때문

random access를 지원하지 않음
원소 추가 및 삭제가 빠름(반복자가 해당 지점을 가리킬 경우)
...

*/

int main(void){

    list<int> list1{1,3,5,7,9,2,4,6,8,10};
    list<int> list2{1,2,3,5,7,11};
    

    // can't use random access

    //cout << list1[3] << endl;
    //cout << get<3>(list1) << endl;

    cout << "list1: "; for(auto i : list1) cout << i << ", "; cout << endl;
    cout << "list2: "; for(auto i : list2) cout << i << ", "; cout << endl;

    //merge(list) 두 리스트를 합친다.

    list1.merge(list2);
    cout << "merge list1: "; for(auto i : list1) cout << i << ", "; cout << endl;

    //remove(val) 값이 val인 원소 모두 삭제
    list1.remove(11);
    cout << "remove 후 list1: "; for(auto i : list1) cout << i << ", "; cout << endl;

    //remove_if(pre) predicate를 만족하는 원소 모두 삭제
    list1.remove_if([](int x){return x <3;});
    cout << "remove_if 후 list1: "; for(auto i : list1) cout << i << ", "; cout << endl;

    //remove, remove_if 로는 원소를 완벽하게 삭제 불가능 --> container 뒤로 원소를 이동시킴.
    // erase( remove(~))로 사용하여 삭제해야함

    //unique: 동일값 원소 제거
    list1.unique();
    cout << "unique 후 list1: "; for(auto i : list1) cout << i << ", "; cout << endl;

    //unique(pre) predicate를 만족하면서 동일값 원소 제거

    //splice(pos,...) list를 pos 위치에서 잘라붙이는 역할
    list1.splice(list1.begin(),list<int>{1,2,3,4,5});
    cout << "splice 후 list1: "; for(auto i : list1) cout << i << ", "; cout << endl;

}