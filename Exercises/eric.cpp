#include <iostream>
#include <vector>
#include <string>
using namespace std;


vector<string> move(vector <string> f, vector <string> s, string a) {
  for(int i = 0; i < f.size(); i++) {
    if(f[i] == a) {
      s.push_back(f[i]);
    }
  }
  return s;
}



int main() {
  vector <string> first;
  vector <string> second;
  string a = "Eric";

  first.push_back("Eric");
  first.push_back("Snake");
  first.push_back("Rabbit");
  first.push_back("Bread");

  cout<<first[0]<<endl;

  move(first, second, a);

  cout<<second[0]<<endl;

}
