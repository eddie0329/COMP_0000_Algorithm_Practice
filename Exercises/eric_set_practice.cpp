#include <iostream>
#include <set>
#include <iterator>
#include <string>

using namespace std;

//function that moving object from origin_room to dest_room
void move(set<string> &origin_room, set<string> &dest_room,
  string element_to_move_1 , string element_to_move_2 = "") {
    dest_room.insert(element_to_move_1);
    dest_room.insert(element_to_move_2);
    origin_room.erase(element_to_move_1);
    origin_room.erase(element_to_move_2);
}

//function that moving all element from origin_room to dest_room
void move_all(set<string> &origin_room, set<string> &dest_room,
  string element_to_move_1, string element_to_move_2,
  string element_to_move_3, string element_to_move_4) {
    dest_room.insert(element_to_move_1);
    dest_room.insert(element_to_move_2);
    dest_room.insert(element_to_move_3);
    dest_room.insert(element_to_move_4);
    origin_room.erase(element_to_move_1);
    origin_room.erase(element_to_move_2);
    origin_room.erase(element_to_move_3);
    origin_room.erase(element_to_move_4);
}
//function that searching the element
int search(set<string> &room, string element) {
  set<string>::iterator it = room.begin();

  for(it = room.begin(); it != room.end(); it++){
    if(*it == element){
      return 1;
    }
  }
}

int main() {
  //declaration
  set<string> first_room;
  set<string> second_room;

  first_room.insert("Eric");
  first_room.insert("Rabbit");
  first_room.insert("Snake");
  first_room.insert("Bread");

  set<string>::iterator it1 = first_room.begin();
  set<string>::iterator it2 = second_room.begin();

  move_all(first_room, second_room, "Eric", "Rabbit", "Snake", "Bread");

  search(first_room, "Bread");


  //print all first_room's elements
  for(it1 = first_room.begin(); it1 != first_room.end(); it1++) {
    cout<<*it1<<endl;
  }
  cout<<"---------"<<endl;

  //print all second_room's elements
  for(it2 = second_room.begin(); it2 != second_room.end(); it2++) {
    cout<<*it2<<endl;
  }

return 0;
}
