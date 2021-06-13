#include <stdio.h>
#include <string.h>
#include <curses.h>


int main()
{
  char username[15];
  char password[31];


  printf("Enter your username:\t");
  scanf("%s",&username);

  printf("Enter your password\t");
  scanf("%s",&password);

  if(strcmp(username, "script")==0){
    if(strcmp(password, "scriptpass")==0){

      printf("Welcome!, Login succesful!\n");


    }else{
  printf("wrong password");
}
  }else{
  printf("User does not exist\n");
}




  return 0;

}
