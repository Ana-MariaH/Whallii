#include<iostream>
#include<vector>
#include<string>

int main(){
  std::string turtur = "A whale of a deal";
  std::vector<char> vowels;
  vowels.push_back('a');
  vowels.push_back('e');
  vowels.push_back('i');
  vowels.push_back('o');
  vowels.push_back('u');
 
  std::vector<char> result;
  
  for(int i = 0; i < turtur.size(); i++){
    if(turtur[i] == 'u' or turtur[i] == 'e' ){
          result.push_back(turtur[i]);
      }
    for( int j = 0; j < vowels.size(); j++){
      if(turtur[i] == vowels[j]){
        result.push_back(turtur[i]);
      }
      
   }
  }
  for(int k = 0; k<result.size(); k++){
    std::cout << result[k] ;
   }
 }
  
  
  
  
  
  
  
  
  
  
  
  
  
