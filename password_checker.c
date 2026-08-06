# my-first-project.c

#include <iostream>
#include <string>
#include <cctype>

int main(){
  std::string password;

  std::cout<<"enter the password:";
  std::cin>>password;

  bool hasNumber = false;
  bool hasSpecial = false;
  bool hasUpper = false;
  bool hasLower = false;

  if(password.length()>=8){

    for(int i=0; i<password.length(); ++i){

      char ch = password[i];

      if(isdigit(ch)){
        hasNumber = true;
      }

      if(!isalnum(ch)){
        hasSpecial = true;
      }

      if(islower(ch)){
        hasLower = true;
      }

      if(isupper(ch)){
        hasUpper = true;
      }
    }

    if(hasNumber && hasSpecial && hasLower && hasUpper){
      std::cout<<"valid password"<<std::endl;
    }
    else{
      std::cout<<"invalid password"<<std::endl;

      if(!hasNumber){
        std::cout<<"number is needed\n";
      }
