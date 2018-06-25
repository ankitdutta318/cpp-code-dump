#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    s.push(5);
    s.push(10);
    s.push(15);
    cout << s.size() << endl; //3 because the stack has 3 elements
    cout << s.empty() << endl; //false because stack has 3 elements
    cout << s.top() << endl; //top element is 15
    s.pop(); //we pop the top elements, which is 15
    cout << s.top() << endl; //top element is 10 now
    s.pop(); //we pop top element, which is the 10
    cout << s.top() << endl; //top element is now 5
    s.pop(); //pop the last element, which is 5
    cout << s.empty() << endl; //true because stack is empty now


}
