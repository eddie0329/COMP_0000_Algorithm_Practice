#include <iostream>
#include <vector>
#include <stack>


int main() {

  std::stack<int> s;

  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);

  std::cout << s.top() << std::endl;
  s.pop();
  std::cout << s.top() << std::endl;
  s.pop();
  std::cout << s.top() << std::endl;
  s.pop();
  std::cout << s.top() << std::endl;
  s.pop();
  
  return 0;

}
