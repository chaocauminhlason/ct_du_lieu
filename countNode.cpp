#include <iostream>
#include 'slist.cpp'
template<class E>
class baitap:: public Slist<E>{
public:

int countNode(Node<E> * head)
if(head==nullptr) return 0;
return countNode(head-> next);
int main()
{
    printf("Hello World");

    return 0;
}
}
int main(){
    baitap<E> a;
    a.countNode(&head);
    return 0;
}
