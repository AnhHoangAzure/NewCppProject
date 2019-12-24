#include <iostream>

using namespace std;
// Definition for singly-linked list:
template<typename T>
struct ListNode {
   ListNode(const T &v) : value(v), next(nullptr) {}
   T value;
   ListNode *next;
 };
//
ListNode<int> * removeKFromList(ListNode<int> * l, int k) {
    ListNode<int> *tmp = new ListNode<int>(0);
    while(l!= NULL)
    {
        if(l->value != k)
        {
            tmp->next = l;
            tmp = tmp->next;
        }
        l = l->next;
    }
    return  tmp;

}

int main()
{
    ListNode<int> *mList = new ListNode<int>(0);
    mList->value = 1;

    cout << "Hello World!" << endl;
    return 0;
}
