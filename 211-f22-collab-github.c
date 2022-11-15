// Collaborative code file, Lab 13
//
// One person in your partner group should clone this repository.
// Create a function that outputs your name, along with either one thing
//    that you learned about git or GitHub or something that gave you trouble
//    that you would like others to learn from. The function name should be
//    your NetID combined with your partner's NetID.
// Feel free to add other things to your function as well, though be mindful
// of the length of it, given how many students will be collaborating on this
// code!
//
// Read through the code that is already here before adding your own.
// Add this code to the repository using git commands.
//
// An example is shown below.
//
// UIC CS 211, Fall 2022
#include <stdio.h>
#include <stdlib.h>

void ttsets2_cesq3() {
  printf("Tuvshuu Tsetsengarid and Charlie Esquivel\n");
  printf("We learned that github with repl is the worst thing mankind has ever "
         "developed!\nAs such we moved to using git bash instead!\n");
}

int findMax(int array[10]) {
  int max = array[0];
  for (int i = 0; i < 10; i++) {
    if (array[i] > max) {
      max = array[i];
    }
  }
  return max;
}

int main() {
  printf(
      "This code has been created by the students of CS 211, Fall 2022!\n\n");

  ttsets2_cesq3();

  int array[10];

  for (int i = 0; i < 10; i++) {
    array[i] = rand() % 100;
  }

  printf("Max of a 10 number array is: %d\n", findMax(array));

  return 0;
}