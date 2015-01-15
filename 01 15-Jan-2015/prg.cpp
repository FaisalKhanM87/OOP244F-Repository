#include <iostream>
using namespace std;

int main(){
   int
      age;
   char
      name[15];
   cout << "What's your name and age?" << endl << "Name: ";
   cin >> name;
   cout << "Age: ";
   cin >> age;
   if (age >= 19){
      cout << age << "? Welcome " << name << "! What will you have?" << endl;
   }
   else{
      cout << "You're " << age << "," << name << "? Sorry, kid. You\'re too young to drink" << endl;
   }
   return 0;
}