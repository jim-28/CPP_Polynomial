#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <ctype.h>
#include "func.h"

using namespace std;

int posynomial(string input)
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
    // }


  double mult=0, posy=0;
  int size = numbers.size();
  double x = numbers[size-1];

  for(int i=0; i<(size-1); i++){
    if(i==0){
      posy=numbers[i];
    }
    else if(i>0){
      mult=pow(x,(-i))*numbers[i];
    }
    posy=mult+posy;
  }
  cout << "The posynomial answer is:" << endl;
  cout << posy << endl;

 return 0;
}
