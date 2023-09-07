/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

 

#include <bits/stdc++.h>

 

#include <vector>
using namespace std;
template <class E>
struct Node{
    E element;
    Node<E> *next;
    Node(E e E(),Node<E> *n=0): element(e),next(n){}
};
template<class E>
class Slist{

 

protected:
    Node<E> *head;
    int size;

public:
    void print() const;
    Node<E> *& getLink(int);
    Node<E> searchLink(const E & e);
    bool find(const E & e) const;

    void addFirst(const E & e)
    Node<E> *v= new Node<E> (value);
    v->next;
    head=v;
    size++;
    void removeFirst(){
        if(head) throw"danh sach rong"
        Node<E> *t=head;
        head=head->next;
        delete t;
        size--;
    }
    void replace (int index, E value){
        Node<E>*& l = getLink(index);
        l->element= value;
    }
    void clear(){
        while(head){
            remove(0);
        }
    }
    E getElement(int index){
        Node<E> *g l= getlink( index); // dang co mot con throw
        return l->element;
    }
    E front(){
        return getElement(0);
    }
    E back(){
        return getElement(size-1);
    }
    virtual ~SList(){
        clear();
    }
};

 

int main(){

 

    return 0;

 

}
