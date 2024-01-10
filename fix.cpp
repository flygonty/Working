#include <iostream>
#include <string>
#include <string.h>
#include <cstring>
#include <fstream>
#include <unordered_map> 
#include <regex>

using namespace std ;

unordered_map < string, string > gHash = {
{ "u8",  "u8" } ,
{ "u16", "u16" } ,
{ "u32", "u32" },
{ "u64", "u64" },
{ "usize", "uszie"} ,
{ "i8", "i8" },
{ "i16", "i16" },
{ "i32", "i32" },
{ "i64", "i64" },
{ "isize", "isize" },
{ "f32", "f32" },
{ "f64", "f64" },
{ "#include", "#include" },
{ "typedef", "typedef" },
{ "int", "int" },
{ "{", "{" },
{ "if", "if" },
{ "}", "}" }
} ;

void readAndFixFile( char *filepath ) ;
string getToken( ifstream &sourceCode ) ;
bool isFunction( string token ) ;

int main( int argc, char* argv[] ) {
  if ( argc > 2 ) {
    // terminate the program if there are more arguments
    printf( "Please give the program only one file!\n" ) ;
    return 0 ;
  } // if

  readAndFixFile( argv[1] ) ;
  return 0 ;
} // main()

void readAndFixFile( char *filepath ) {
  string token ;
  ifstream sourceCode ;
	string fixed = "fixed_" ;
	string filename = filepath ;
	filename = fixed + filepath ;
	ofstream MyFile(filename) ; 
  sourceCode.open( filepath ) ;
  // get first token and check it whether it belongs data type
  string line ;
	bool isDone = false ;
  while ( getline( sourceCode, line ) ) {
    for ( int i = 0 ; i < line.length() ; i++ ) {
      if ( line[0] == ' ' && !isDone  ) {
				// skip whitespaces
				while ( line[i] == ' ' ) {
					i++ ;
				} // while()
        isDone = true ;
      } // if
			if ( line[i] != ' ' ) {
        token += line[i] ;
      } // if
      else {
        // modify this part
        break ;
			} // else
		} // for

		if ( gHash.find( token ) == gHash.end() ) {
			// check whether it is "function" or "struct variable"
			if ( !isFunction( token ) ) {
				token = token + " " ;
				string newToken = "struct " + token ;
				line = regex_replace( line, regex( token ), newToken );
				cout << line << endl ;
				MyFile << line ;
				MyFile << "\n" ;
			} // if
		} // if
		else {
			cout << line << endl ;
			MyFile << line ;
			MyFile << "\n" ;
			// Myfile << line ;
		} // else
		
		token = "" ;
    isDone = false ;
	} // while()

  sourceCode.close() ;
	MyFile.close() ;
} // readAndFixFile()

bool isFunction( string token ) {
  for ( int i = 0 ; i < token.length() ; i++ ) {
		if ( token[i] == '(' )
			return true ;
	} // for

	return false ;
} // isFunction()





