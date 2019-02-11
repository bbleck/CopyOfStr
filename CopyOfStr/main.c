//
//  main.c
//  CopyOfStr
//
//  A simple program to copy a string into a new location in memory.
//
//  Created by Brian on 2/10/19.
//  Copyright © 2019 Brian Bleck. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int i;
  //get string
  printf("Input a string, human.\n");
  char line[100];
  scanf("%s", line);
  char *s = line;
  if(!s){
    return 1;
  }
  
  //allocate mem for another string
  char *t = malloc((strlen(s)+1) * sizeof(char));
  if(!t){
    return 2;
  }
  
  //copy string into new memory space
  for(i = 0; i < strlen(s)+1; i++ ){
    t[i] = s[i];
  }
  
  //capitalize first letter in copy
  if(strlen(t) > 0){
    t[0] = toupper(t[0]);
  }
  
  //print two strings
  printf("input: %s\noutput: %s\n", s, t);
  
  return 0;
}
