#include <iostream>
using namespace std;
int main() {
  int room = 1;
  char input;

  while (input != 'q'){
    switch(room){
      case 1:
        cout<<"You are in the living room\n{You can go (n)orth, (w)est, and (s)outh}"<<endl;
        cin>>input;
        if (input == 'n')
          room = 4;
        if (input == 'w')
          room = 3;
        if (input == 's')
          room = 2;
      break;
      case 2:
        cout<<"You are in a bedroom South of the living room\n{You can go (n)north}"<<endl;
        cin>>input;
        if (input == 'n')
          room = 1;
      break;
      case 3:
        cout<<"You are in the bedroom West of the living room\n{You can go (e)ast}"<<endl;
        cin>>input;
        if (input == 'e')
          room = 1;
      break;
      case 4:
        cout<<"You are in the dining room North of the living room\n{You can go (n)orth, (s)outh, and (e)ast}"<<endl;
        cin>>input;
        if (input == 'n')
          room = 5;
        if (input == 's')
          room = 1;
        if (input == 'e')
          room = 6;
      break;
      case 5:
        cout<<"You are in the kitchen North of the dining room\n{You can go (s)outh}"<<endl;
        cin>>input;
        if (input == 's')
          room = 4;
      break;
      case 6:
        cout<<"You are in the restroom East of the dining room\n{You can go (w)est}"<<endl;
        cin>>input;
        if (input == 'w')
          room = 4;
      break;
    }
  }
}
