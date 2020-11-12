#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int> que;
    //一次向队列的尾部插入5的元素
    for(int i = 1; i <= 5 ; i++ ) que.push(i);
    cout<<"The number of elements in the queue = " << que.size()<<endl;
    cout<<"Is the queue empty? = "<<que.empty()<<endl;
    while(!que.empty()){
        // 从队列的头部访问元素
        //访问queue中的第一个元素
        cout<<que.front()<<endl;
        //删除que中的第一个元素
        que.pop();
    }
    return 0;
}