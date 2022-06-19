#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

const string con = "Vowels.txt";//using const string instead of hard-coding the file in my code.
int as = 0, es = 0, is = 0, os = 0, us = 0, ms = 0, bs = 0, ks = 0;
double VC;
char A = 'A', E = 'E', I = 'I', O = 'O', U = 'U', M = 'M', B = 'B', K = 'K';
char a = 'a', e = 'e', i = 'i', o = 'o', u = 'u', m = 'm', b = 'b', k = 'k';//Characters I will be looking for in the file.
char z = '*', x = '.', Vowel;

int main(int argc, char*argv[])//getting the name of the file from command line.
{
  ifstream fs;
  fs.open(con);
  if (argc > 1)
  {
    cout << argv [0] << "\n";
    cout << argv [1] << "\n";
  }//passes file name.
  cout << setw(60) << setfill('*') << z << endl;
  cout << setw(12) << setfill('*') << z << " Welcome to my Letter Count Program " << setw(12) << setfill('*') << z << endl;
  cout << setw(60) << setfill(z) << z << endl; //intro to program using manipulators in order to prevent hard-coding.
  cout << endl;
  //cout << "Analyzing file '" << argv[1] << "'..." << "\n" ;//
  cout << endl;
  
  while (fs >>  Vowel)
  {
    if(Vowel == 'A'||Vowel == 'a')
      as++;
    else if(Vowel == 'E'||Vowel == 'e')
      es++;
    else if(Vowel == 'I'||Vowel == 'i')
      is++;
    else if(Vowel == 'O'||Vowel == 'o')
      os++;
    else if(Vowel == 'U'||Vowel == 'u')
      us++;//counts all the upper and lowercase vowels in the file.
    else if(Vowel == 'M'||Vowel == 'm')
      ms++;
    else if(Vowel == 'B'||Vowel == 'b')
      bs++;
    else if(Vowel == 'K'||Vowel == 'k')
      ks++;
    
  }
VC = as + es + is + os + us;//calculates total number of vowels
  
  cout << "The number of A's:" << setw(42) << setfill('.') << x << as << endl;//manipulators are used to format output.
  cout << "The number of E's:" << setw(42) << setfill('.') << x << es << endl;
  cout << "The number of I's:" << setw(42) << setfill('.') << x << is << endl;
  cout << "The number of O's:" << setw(42) << setfill('.') << x << os << endl;
  cout << "The number of U's:" << setw(42) << setfill('.') << x << us << endl;
  cout << "The number of M's:" << setw(42) << setfill('.') << x << ms << endl;
  cout << "The number of B's:" << setw(42) << setfill('.') << x << bs << endl;
  cout << "The number of K's:" << setw(42) << setfill('.') << x << ks << endl;
  cout << "The vowel count is:" << setw(41) << setfill('.') << x << VC << endl;
  //outputs number of each vowel and the total vowel count in the file.

}