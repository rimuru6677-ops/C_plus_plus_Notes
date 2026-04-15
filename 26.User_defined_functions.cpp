#include<iostream>

 void happybirthday(std::string name1,int age1);

 int main(){

     std::string name= "Rahim";
     int age= 21;

     void happybirthday(name,age);

     return 0;
 }

 void happybirthday(std::string name1,int age1){

     std::cout << "Happy Birthday to you, " << name1 << '\n';
     std::cout << "You are , " << age1 << "years old." << '\n';

 }
