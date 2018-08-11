#include "cpp_all_headers.hpp"

using namespace std;

typedef struct Node {
  int data;
  struct Node* p_left_link = NULL;
  struct Node* p_right_link = NULL;
}Node;


Node *create_node(int data_input) {
  Node *p_Node = (Node *)malloc(sizeof(Node));
  p_Node -> data = data_input;
  return p_Node;
}

void insert_node_left(Node *p_left, Node *new_node) {
  p_left -> p_left_link = new_node;
}

void insert_node_right(Node *p_right, Node *new_node) {
  p_right -> p_right_link = new_node;
}

void display(Node *head) {
  // Node *p = head;
  // for(int i = 0; i < 10; i++) {
  //   if(p == NULL){
  //     p = head;
  //     cout<<p -> data<<endl;
  //
  //   }
  //   else
  //   cout<<p->data<<endl;
  //   p = p_left_link;
  // }

}

int depth_search(Node *head, int element_to_search) {

}

int breath_search(Node *head, int element_to_search) {
  Node *p = head;

}

int main () {

  Node *tree = create_node(1);
  Node *head = create_node(1);


  Node *p = create_node(1);
  insert_node_left(p, create_node(2));
  insert_node_right(p, create_node(3));
  p = create_node(2);
  insert_node_left(p, create_node(4));
  insert_node_left(p, create_node(5));
  p = create_node(3);
  insert_node_left(p, create_node(6));
  insert_node_left(p, create_node(7));
  display(head);
}
