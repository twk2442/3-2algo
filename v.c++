#include <algorithm>
#include <iostream> // input/output stream
#include <vector>
using namespace std;    // std=standard 표준네임스페이스를 사용하겠다는 의미
// using namespace 는 소속이다 
//네임스페이스라는 소속 공간에 따라서 변수나 함수가 같은 이름임에도
//다른 식으로 구분이 될 수 있다
//네임스페이스안에 함수도 들어갈 수있다.
// 즉 네임스페이스가 c++에서 하나의 객체단위역할을 한다

// :: 범위확인 연산자 

// vector 멤버함수 예시
//   마지막 원소참조: v.back() , 첫원소 가리킴  v.begin() , 벡터 맨 뒤에다 원소 추가: v.push_back(추가할 원소);
 

int main(){
    cout<<"hello algo"<<endl;  //cout 는 c언어 printf같은출력함수
    vector<int> myv(5);
    vector<int>::iterator itr;  // itr이라는  vector내부에 있는 이터레이터 선언 
    // itr 은 포인터 (주소값)
    myv.push_back(3);
    cout<<myv[5]<<endl;



    return 0;
}