#include<iostream>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;

int main(){

    stack<int> st;
    st.push(3);
    int sttop = st.top();
    cout<<sttop<<endl;
    st.push(4);
    st.push(1);
    sttop = st.top();
    cout<<sttop<<endl;
    st.pop();
    cout<<sttop<<endl; // top을 계속 새로 정의해주지 않으면  자동업데이트 x
    // 빅오

    

    return 0;
}