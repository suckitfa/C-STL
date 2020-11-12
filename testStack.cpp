#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> stk;
    //入栈6个元素
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.push(5);
    stk.push(6);

    cout << "Is the stack empty? = " << stk.empty() << endl; //0==false
    cout << "The number of elments in the stack : = " << stk.size() << endl;
    while (!stk.empty())
    {
        // 访问栈顶的元素
        cout << stk.top() << " ";
        //删除栈顶的元素
        stk.pop();
    }
    cout << endl;

    return 0;
}