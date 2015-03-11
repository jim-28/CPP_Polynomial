#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <ctype.h>
#include "func.h"

using namespace std;

int polynomial(string input)
{ 

          //Put the strings seperated by spaces into a vector<double>
  vector<double> numbers;
  int i=0, start=0, end;
  string temp;
  do{
         end=input.find_first_of (' ',start);
         temp=input.substr(start,end);
         numbers.push_back(atof(temp.c_str( )));
         ++i;
         start=end+1;
     }while(start);

     //FOR DEBUGGING
    // for (i=0; i<numbers.size(); ++i)
    // {
    //   cout << numbers[i] << '\n';
     //}

  int size = numbers.size();
  double x = numbers[(size-1)];
  double mult=0, poly=0;

  for(int i=0; i<(size-1); i++){
    if(i==0){
      poly=numbers[i];
    }
    else if(i>0){
      mult=(pow(x,i)*numbers[i]);
    }
    poly=mult+poly;

//DEBUG    
//cout << poly << endl;
  }
  cout << "The polynomial answer is:" << endl;
  cout << poly << endl;

 return 0;
}
