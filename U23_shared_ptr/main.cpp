#include <iostream>

using namespace std;
void foo(const:: std::shared_ptr<int>& i){
    (*i)++;
}
int main()
{
    auto sp = std::make_shared<int>(12);
    foo(sp);
    cout << "Value: *sp"<<*sp << endl;
    return 0;
}
