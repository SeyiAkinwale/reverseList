#include <iostream>

class Node
{
  public:
    std::string val;
    Node * next;

  Node(std::string initialVal)
  {
    val = initialVal;
    next = nullptr;
  }
};

void printList(Node * head)
{
  std::cout<<std::endl<<"printList ";
  if(head==nullptr) std::cout<<std::endl<<"empty list ";
  Node * curr = head;
  while (curr!=nullptr)
  {
    std::cout <<std::endl<<curr->val;
    curr=curr->next;
  }
}

Node * reverseList(Node * head)
{
  if(head == nullptr) return nullptr;
  Node * prev = nullptr;
  Node * curr = head;
  Node * back = head->next;

  while (curr != nullptr)
  { 
      back = curr->next;
      curr->next =  prev;
      prev = curr;
      curr = back;          
  }

  return prev;
}

Node * reverseList(Node * head, Node * prev)
{
  Node * curr = head;
//  Node * back = head->next;
  if (head == nullptr) return head;
  else if (head->next == nullptr) return head;
  else
  {
    curr->next=prev;
    return (head->next,head);
    std::cout<<"hi3"<<std::endl;
  }
}
int main() 
{
  Node * cute = nullptr;
  Node a("a");
  Node b("b");
  Node c("c");
  Node d("d");
  Node e("e");
  Node f("f");

 a.next = &b;
//  b.next = &c;
//  c.next = &d;
//  d.next = &e;
//  e.next = &f;

//  std::cout<<"b "<<b.val<<std::endl;

  Node end("end");
  printList(&a);
  end.next=reverseList(&a,nullptr);
  
  if(end.next == nullptr)std::cout<<std::endl<<"nullptr";
  else std::cout <<std::endl<<end.val;
  
  printList(&b);
}