#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main () {
  string a = "cde";
  string b = "cccs";
  int maxKept = 0;
  int answer = 0;

  vector<char> tempVecA(a.begin(), a.end());
  vector<char> tempVecB(b.begin(), b.end());
  int maxLose = (tempVecA.size() + tempVecB.size());

  for(vector<char>::iterator iterA = tempVecA.begin(); iterA != tempVecA.end(); ++iterA) {
    for(vector<char>::iterator iterB = tempVecB.begin(); iterB != tempVecB.end(); ++iterB ) {
      if(*iterA == *iterB) {
        maxKept ++;
        *iterB = 0;
        break;
      }
    }
  }
  answer = maxLose - 2*maxKept;

  cout<<"MAXKEPT:"<<maxKept<<endl; 
  cout<<"MAXLOSE:"<<maxLose<<endl;
  cout<<answer<<endl;
  return answer;
}
