#include <stdio.h>
#include <stdlib.h>

int BinarySearch(int arr[], int target){
  int min = 0;
  int max = sizeof(arr) - 1
  int nr_of_guess = 0;
  int guess, average;
  
  while(max > min){
    
    guess = (max + min)/2;
   
    nr_of_guess++;
   
    if(arr[guess] == target){
      printf("Number of guesses: %d", nr_of_guess);
      return guess;
    }
    
    else if(arr[guess] < target){
      min = guess + 1;
    }
    
    else{
      max = guess - 1;
    }
  
  }//end of while statement
  
  return -1;
  
}//end of BinarySearch function


int main(){
  int arr = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 
		41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97];
  int result;
  
  result = BinarySearch(arr, /*Input value to search for*/);
  
  printf("Found the value at index: %d", result);
  
}//main
  
  
  
  
  
