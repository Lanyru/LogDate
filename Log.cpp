#include <fstream>
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
  ofstream f;
  f.open("C:/Log.txt", ios_base::app); //Remember to change the file's path to the desired destination. Default is C:/ with Log.txt as file name.
  if (!f)
    return 1; //Error cant open file!
  else
  {
    time_t t = time(NULL); //Time now!
    f << asctime(localtime(&t)) << '\n'; //Write time in file.
    f.close();
  }
  return 0;
}
