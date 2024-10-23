/*
This program takes in two inputs being a file that you'd like to copy from, 
and a file you'd like to copy into. It uses these to copy the contents
of one file into another.
Ex: ./myCopier textFile1.txt textFile2.txt
*/
#include <fstream>
#include <iostream>

using namespace std;


int main(int argc, char* argv[]){

  if(argc != 3){ //Checks Number of Input Arguments is Correct
    cout << "Improper Usage, program requires two arguments" << endl;
    cout << "(name of file you want copied, name of file to copy to)" << endl;
    return 2;
  }
  fstream fs; 
  fstream fs2;
  string line;
  string pathname1 = argv[1];
  string pathname2 = argv[2];
  
  fs.open((pathname1).c_str(),fstream::in); //Opening both file streams
  fs2.open((pathname2).c_str(), fstream::out);
  
  while(getline(fs,line)){
    fs2<<line;   //Goes through file one and puts its data into file2
    fs2<<endl;
  }

  fs.close(); //Closes both files
  fs2.close(); 
}
