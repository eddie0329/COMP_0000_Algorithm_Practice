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

int breadth_first_search(Node *head, int element_to_search) {
  // Make a queue.
  queue<Node *> q;

  // Insert the head to the queue.
  q.push(head);

  // While q is not empty.
  while (!q.empty()) {
    // Get a node from the front of the q.
    Node *temp = q.front();
    q.pop();

    // Visit the node.
    cout << temp->data << endl;

    // If the data is found, quit everything.
    if (temp->data == element_to_search) {
      cout << "Data has been found!" << endl;
      break;
    }

    // Add children to the q.
    if (temp->p_left_link != NULL) {
      q.push(temp->p_left_link);
    }
    if (temp->p_right_link != NULL) {
      q.push(temp->p_right_link);
    }

  }
}

int breadth_first_search_print(Node *head) {
  // Make a queue.
  queue<Node *> q;

  // Insert the head to the queue.
  q.push(head);

  // While q is not empty.
  while (!q.empty()) {
    // Get a node from the front of the q.
    Node *temp = q.front();
    q.pop();

    // Visit the node.
    cout << temp->data << endl;

    // Add children to the q.
    if (temp->p_left_link != NULL) {
      q.push(temp->p_left_link);
    }
    if (temp->p_right_link != NULL) {
      q.push(temp->p_right_link);
    }

  }
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

int flag = 0;

void depth_first_search_recursive_print(Node *node, int element_to_search) {

  // Visit the node.
  cout << node->data << endl;

  if (node->data == element_to_search) {
    cout << "Data has been found!" << endl;
    flag = 1;
  }

  if (flag == 1) {
    return;
  }

  // Base case: if there is no child, return!
  if (node->p_left_link == NULL && node->p_right_link == NULL) {
    return;
  }

  // If there are some children, call them one by one from the left-most one.
  if (node->p_left_link != NULL) {
    depth_first_search_recursive_print(node->p_left_link, element_to_search);
  }

  if (flag == 1) {
    return;
  }

  if (node->p_right_link != NULL) {
    depth_first_search_recursive_print(node->p_right_link, element_to_search);
  }

  // Return.
  return;
}

int depth_first_search_iterative_print(Node *node, int element_to_search) {
  // Make a stack.
  stack<Node *> s;

  // Visit the first node.
  cout << node->data << endl;

  // Push the children from the right-most one.
  if (node->p_right_link != NULL) {
    s.push(node->p_right_link);
  }
  if (node->p_left_link != NULL) {
    s.push(node->p_left_link);
  }

  // While the stack is not empty
  while (!s.empty()) {

    // Pop the node at the top of the stack.
    Node *temp = s.top();
    s.pop();

    // Visit the node popped.
    cout << temp->data << endl;

    // Blah, blah, blah.
    if (temp->data == element_to_search) {
      cout << "Data has been found!" << endl;
      break;
    }

    // If the node has children, push them to the stack.
    if (temp->p_right_link != NULL) {
      s.push(temp->p_right_link);
    }
    if (temp->p_left_link != NULL) {
      s.push(temp->p_left_link);
    }

  }

  return 0;
}

int main () {
  //    1
  //  2   3
  // 4 5 6 7
  Node *head = create_node(1);
  Node *node1 = head;
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

  depth_first_search_iterative_print(head, 7);
}
