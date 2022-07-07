#include <iostream>
#include <string.h>
// fstream: General file stream with ofstream and ifstream to create, read, and write files
#include <fstream>
using namespace std;

// ofstream: Output file stream to create and write information to file
// ifstream: Input file stream to reads information from file

int main()
{

  // Open a file
  ofstream MyFile("test.txt");
  if (MyFile.is_open())
  { // Check if open file succeeded
    MyFile << "I am writing to the file. \n";
    MyFile << "Check it out.\n";
  }
  else
  {
    cout << "Unable to write to file.";
  }

  MyFile.close();

  // Open file & read line by line
  ifstream openFile("test.txt");
  string line;
  if (openFile.is_open())
  {
    while (getline(openFile, line))
    {
      cout << line << '\n';
    }
  }
  openFile.close();

  // Open file modes, separate with | to use more than one
  // ios::app - append to end of file
  // ios::ate - go to end of file
  // ios::binary - open in binary mode
  // ios::in - open as read only
  // ios::out - open as write only
  // ios::trun - delete file contents
  // outfile.open("file.dat", ios::out | ios::trunc );

  // Create file stream types
  ifstream infile;
  ofstream outfile;

  // Get filenames from user input
  char fileName[31];

  cout << "Enter the output file name: ";
  cin >> fileName;
  outfile.open(fileName);

  cin.ignore();
  string entry;
  
  cout << "Enter data to write to output file: ";
  getline(cin, entry);
  outfile << entry;
  outfile.close();

  string strFileName;
  cout << "Enter the input file name: ";
  cin >> strFileName;
  infile.open(strFileName.c_str()); // open needs a null terminated string, convert to c-string

  string eachLine = "";

  while (getline(infile, eachLine))
  {
    cout << eachLine << endl;
  }

  infile.close();
  return 0;
}
