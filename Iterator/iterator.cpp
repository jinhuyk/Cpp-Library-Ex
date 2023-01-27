#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

/*

iterator

사용시 auto를 이용하여 정의한다.
...

*/

int main(void){

    vector<int> v{1,2,3,4,5,6,7,8,9};

    //begin(cont) : return start iterator

    cout << "*begin(v): "<<*begin(v) << endl;
    // 만약 반복자가 가리키는 원소를 사용하기 위해서는 반복자 앞에 *을 넣어주면된다.

    //end(cont) : return last iterator
    cout << "*end(v): "<<*end(v) << endl;
    //rbegin(cont): return reverse start iterator
    cout << "*rbegin(v): "<<*rbegin(v) << endl;
    //rend(cont) : return reverse last iterator
    cout << "*rend(v): "<<*rend(v) << endl;
    //cbegin, cend,crbegin, crend: return const iterator
    auto it = begin(v)+3;

    //prev(it): iterator 바로 앞 지점을가리키는 반복자 
    cout << "*prev(it): "<<*prev(it)<< endl;
    
    //next(it): iterator 바로 뒤 지점을가리키는 반복자 
    cout << "*next(it): "<<*next(it)<< endl;

    //distance(fir,sec): fir과 sec사이의 원소 개수 리턴
    cout<< "distance(begin(v),end(v)): " << distance(begin(v),end(v))<<endl;

    //advance(it, n): it를 n만큼 뒤로 옮긴다.

    advance(it, 3);
    cout<<"advance 후 *it: "<<*it << endl;


}