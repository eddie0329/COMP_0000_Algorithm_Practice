#include <iostream>
#include <vector>
#include <string>
using namespace std;


//moving elements, located in first_room, to second_room
void move(vector <string> &origin_room, vector <string> &dest_room,
   string element_to_move_1 = "", string element_to_move_2 = "") {
    for(int i = 0; i < origin_room.size(); i++) {
      if(origin_room[i] == element_to_move_1 || origin_room[i] ==
        element_to_move_2) {
        dest_room.push_back(origin_room[i]);
      }
    }
    for(int i = 0; i < origin_room.size(); i++) {
      for(int j =0; j < dest_room.size(); j++) {
        if(origin_room[i] == dest_room[j]) {
          origin_room.erase(origin_room.begin() + i);
        }
      }
  }
}



int main() {
  vector <string> first_room;
  vector <string> second_room;

  first_room.push_back("Eric");
  first_room.push_back("Snake");
  first_room.push_back("Rabbit");
  first_room.push_back("Bread");

  while(1) {
    //braek the infinite loop
    if(second_room.size() == 4) {
      break;
    }
    //start the loop   Snake, Bread --- Eric, Rabbit
    else if(first_room.size() == 4) {
      move(first_room, second_room, "Eric", "Rabbit");
      continue;
    }
    else {
      for(int i = 0; i < first_room.size(); i ++) {
        // Snake, Bread --- Eric, Rabbit   ->   Eric, Snake, Bread --- Rabbit
        if(first_room[i] != "Eric" && first_room[i] != "Rabbit"
           && first_room[i] == "Snake" && first_room[i] == "Bread") {
          move(second_room, first_room, "Eric");
          continue;
        }

        //Eric, Snake, Bread --- Rabbit    -> Bread --- Eric, Snake, Rabbit
        else if(first_room[i] == "Eric" && first_room[i] != "Rabbit"
                && first_room[i] == "Snake" && first_room[i] == "Bread") {
          move(first_room, second_room, "Eric", "Snake");
          continue;
        }

        //Bread --- Eric, Snake, Rabbit     -> Eric, Rabbit, Bread --- Snake
        else if(first_room[i] != "Eric" && first_room[i] != "Rabbit"
                && first_room[i] != "Snake" && first_room[i] == "Bread") {
          move(second_room, first_room, "Eric", "Rabbit");
          continue;
        }

        //Eric, Rabbit, Bread --- Snake      -> Rabbit --- Eric, Bread, Snake
        else if(first_room[i] == "Eric" && first_room[i] == "Rabbit"
                && first_room[i] != "Snake" && first_room[i] == "Bread") {
          move(first_room, second_room, "Eric", "Bread");
          continue;
        }

        //Rabbit --- Eric, Bread, Snake       -> Rabbit, Eric --- Bread, Snake
        else if(first_room[i] != "Eric" && first_room[i] == "Rabbit"
                && first_room[i] != "Snake" && first_room[i] != "Bread") {
          move(second_room, first_room, "Eric");
          continue;
        }

        //Rabbit, Eric --- Bread, Snake        -> ---Eric, Rabbit, Bread, Snake
        else if(first_room[i] == "Eric" && first_room[i] == "Rabbit"
                && first_room[i] != "Snake" && first_room[i] != "Bread") {
          move(first_room, second_room, "Eric", "Rabbit");
          continue;
        }
      }
    }
  }
}
