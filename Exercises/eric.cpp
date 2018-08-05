#include <iostream>
#include <vector>
#include <string>
using namespace std;


//moving elements to second_room
void move(vector <string> first_room, vector <string> second_room, string a) {
  for(int i = 0; i < first_room.size(); i++) {
    if(first_room[i] == a) {
      second_room.push_back(first_room[i]);
    }
  }
}



int main() {
  vector <string> first_room;
  vector <string> second_room;
  string a = "Eric";

  first_room.push_back("Eric");
  first_room.push_back("Snake");
  first_room.push_back("Rabbit");
  first_room.push_back("Bread");

  cout<<first_room[0]<<endl;

  move(first_room, second_room, a);

  cout<<second_room[0]<<endl;

}
