#include <iostream>
#include <queue>
using namespace std;
void showQueue(queue<int> qq){
    queue<int> g = qq;
    while(!g.empty()){
        cout <<"value: "<< g.front()<<endl;
        g.pop();
    }
}
int main()
{
    queue<int> gquiz;
    gquiz.push(10);
    gquiz.push(20);
    gquiz.push(40);

    showQueue(gquiz);

    cout <<"Queue size: "<<gquiz.size()<<endl;
    return 0;
}
