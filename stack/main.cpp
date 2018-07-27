#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack <int> s;
    cout<<"Enter Elements: "<<endl;
    s.push(30);
    s.push(3);
    s.push(20);
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    return 0;
}
