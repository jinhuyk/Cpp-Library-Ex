#include <iostream>
#include <tuple>

using namespace std;

int main(void){

    // tuple 은 pair를 일반화 한것으로 pair에서 사용한 기능은 모두 사용 가능 (p.first, p.second 제외)

    // tuple은 생성할때 make_tuple이라는 헬퍼함수를 이용하면 편리함

    // make tuple
    tuple<string, int, float> tuple1("first",1,1.0);
    auto tuple2 = make_tuple("second",2,2.0);

    // read tuple
    cout << "tuple 1 is "<< get<0>(tuple1) <<","<<get<1>(tuple1)<<","<<get<2>(tuple1)<<endl;
    cout << "tuple 2 is "<< get<0>(tuple2) <<","<<get<1>(tuple2)<<","<<get<2>(tuple2)<<endl;

    // tuple 비교
    cout<< endl;

    cout << "tuple1 < tuple2 : " << (tuple1 < tuple2) << endl;
    cout << endl;

    // tuple 수정

    get<0>(tuple2) = "third";
    get<1>(tuple2) = 3;
    get<2>(tuple2) = 3.0;
    cout << "tuple 2 is "<< get<0>(tuple2) <<","<<get<1>(tuple2)<<","<<get<2>(tuple2)<<endl;

    // std::tie

    int f = 1;
    int s = 2;
    int t = 3;
    cout << "variables : "<< f <<","<< s<<","<<t<<endl;

    auto tie_tup = tie(f,s,t) = make_tuple(100,101,102);
    cout << "tie_tup is "<< get<0>(tie_tup) <<","<<get<1>(tie_tup)<<","<<get<2>(tie_tup)<<endl;
    cout << "variables : "<< f <<","<< s<<","<<t<<endl;

    //std:ignore
    auto ign_tup = tie(f,s,ignore) = make_tuple(1000,1001,1002);
    cout << "tie_tup is "<< get<0>(tie_tup) <<","<<get<1>(tie_tup)<<","<<get<2>(tie_tup)<<endl;
    cout << "variables : "<< f <<","<< s<<","<<t<<endl;



    
}