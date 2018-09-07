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
  stack<int> stack;
  int data = head->data;
  stack.push(data);

  for(int i = 0; i < 10; i++) {
    
  }


  if(data == element_to_search) {
    cout<<data<<endl;
  }
  else {
    data = head->p_left_link->data;
    stack.push(data);

  }
}

int breath_search(Node *head, int element_to_search) {

}

int main () {
  //    1
  //  2   3
  // 4 5 6 7
  Node *head = create_node(1);
  Node *node1 = create_node(1);
  Node *node2 = create_node(2);
  Node *node3 = create_node(3);
  Node *node4 = create_node(4);
  Node *node5 = create_node(5);
  Node *node6 = create_node(6);
  Node *node7 = create_node(7);

  insert_node_left(node1, node2);
  insert_node_right(node1, node3);
  insert_node_left(node2, node4);
  insert_node_right(node2, node5);
  insert_node_left(node3, node6);
  insert_node_right(node3, node7);
}
