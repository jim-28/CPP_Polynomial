#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <ctype.h>
#include "func.h"
 
using namespace std;
 
int main()
{ 
  string input;
  cout<<"Please enter a string of numbers seperated by spaces for conversion:"<<endl;
  while(getline(cin,input))
  {
    bool isNum=true;
    for(int i = 0; i < input.length() && isNum; ++i)
    {
      isNum = (isdigit(input[i]) || input[i]==' ');    
    }

    if(isNum)
    {
	//Feed into polynomial function
      polynomial(input);
      posynomial(input);

      return 0;
    }
    else
    {
      cout << input << " is not a number!" << endl;
      return 1;
    }
  }
}
