
#include <iostream>
#include <string>
#include "MyString.hpp"
using namespace std;

int main() {
    const string   emptyString;
    const MyString emptyMyString;

    const string   testString  ("0123456789012345678901234567890123456789");
    const MyString testMyString("0123456789012345678901234567890123456789");

    cout << "emptyString   is " << emptyString   << endl;
    cout << "emptyMyString is " << emptyMyString << endl;
    cout << "testString    is " << testString    << endl;
    cout << "testMyString  is " << testMyString  << endl << endl;

    cout << "First, we test substr:"                                      << endl;
    cout << "There should be two blank lines and then repetitions..."     << endl;
    cout << testString.substr(40   ) << " " << testMyString.substr(40   ) << endl;
    cout << testString.substr(40,10) << " " << testMyString.substr(40,10) << endl;
    cout << testString.substr(20   ) << " " << testMyString.substr(20   ) << endl;
    cout << testString.substr(20,30) << " " << testMyString.substr(20,30) << endl;
    cout << testString.substr(20,10) << " " << testMyString.substr(20,10) << endl << endl;

    cout << "Next, we test find and rfind for chars and strings:" << endl << endl;
    cout << "Every 8 lines there's a break;"                      << endl;
    cout << "other than that, each line should say \"true\"..."   << endl << endl;

    cout << boolalpha;

    cout << ( testString.find('a'   ) ==  testMyString.find('a'   )) << endl;
    cout << ( testString.find('a',20) ==  testMyString.find('a',20)) << endl;
    cout << ( testString.find('a',40) ==  testMyString.find('a',40)) << endl;
    cout << ( testString.find('a',60) ==  testMyString.find('a',60)) << endl;
    cout << (testString.rfind('a'   ) == testMyString.rfind('a'   )) << endl;
    cout << (testString.rfind('a',20) == testMyString.rfind('a',20)) << endl;
    cout << (testString.rfind('a',40) == testMyString.rfind('a',40)) << endl;
    cout << (testString.rfind('a',60) == testMyString.rfind('a',60)) << endl << endl;

    cout << ( testString.find('0'   ) ==  testMyString.find('0'   )) << endl;
    cout << ( testString.find('0',20) ==  testMyString.find('0',20)) << endl;
    cout << ( testString.find('0',40) ==  testMyString.find('0',40)) << endl;
    cout << ( testString.find('0',60) ==  testMyString.find('0',60)) << endl;
    cout << (testString.rfind('0'   ) == testMyString.rfind('0'   )) << endl;
    cout << (testString.rfind('0',20) == testMyString.rfind('0',20)) << endl;
    cout << (testString.rfind('0',40) == testMyString.rfind('0',40)) << endl;
    cout << (testString.rfind('0',60) == testMyString.rfind('0',60)) << endl << endl;

    cout << ( testString.find('8'   ) ==  testMyString.find('8'   )) << endl;
    cout << ( testString.find('8',20) ==  testMyString.find('8',20)) << endl;
    cout << ( testString.find('8',40) ==  testMyString.find('8',40)) << endl;
    cout << ( testString.find('8',60) ==  testMyString.find('8',60)) << endl;
    cout << (testString.rfind('8'   ) == testMyString.rfind('8'   )) << endl;
    cout << (testString.rfind('8',20) == testMyString.rfind('8',20)) << endl;
    cout << (testString.rfind('8',40) == testMyString.rfind('8',40)) << endl;
    cout << (testString.rfind('8',60) == testMyString.rfind('8',60)) << endl << endl;

    cout << ( testString.find('9'   ) ==  testMyString.find('9'   )) << endl;
    cout << ( testString.find('9',20) ==  testMyString.find('9',20)) << endl;
    cout << ( testString.find('9',40) ==  testMyString.find('9',40)) << endl;
    cout << ( testString.find('9',60) ==  testMyString.find('9',60)) << endl;
    cout << (testString.rfind('9'   ) == testMyString.rfind('9'   )) << endl;
    cout << (testString.rfind('9',20) == testMyString.rfind('9',20)) << endl;
    cout << (testString.rfind('9',40) == testMyString.rfind('9',40)) << endl;
    cout << (testString.rfind('9',60) == testMyString.rfind('9',60)) << endl << endl;

    cout << ( testString.find(""   ) ==  testMyString.find(""   )) << endl;
    cout << ( testString.find("",20) ==  testMyString.find("",20)) << endl;
    cout << ( testString.find("",40) ==  testMyString.find("",40)) << endl;
    cout << ( testString.find("",60) ==  testMyString.find("",60)) << endl;
    cout << (testString.rfind(""   ) == testMyString.rfind(""   )) << endl;
    cout << (testString.rfind("",20) == testMyString.rfind("",20)) << endl;
    cout << (testString.rfind("",40) == testMyString.rfind("",40)) << endl;
    cout << (testString.rfind("",60) == testMyString.rfind("",60)) << endl << endl;

    cout << ( testString.find("018"   ) ==  testMyString.find("018"   )) << endl;
    cout << ( testString.find("018",20) ==  testMyString.find("018",20)) << endl;
    cout << ( testString.find("018",40) ==  testMyString.find("018",40)) << endl;
    cout << ( testString.find("018",60) ==  testMyString.find("018",60)) << endl;
    cout << (testString.rfind("018"   ) == testMyString.rfind("018"   )) << endl;
    cout << (testString.rfind("018",20) == testMyString.rfind("018",20)) << endl;
    cout << (testString.rfind("018",40) == testMyString.rfind("018",40)) << endl;
    cout << (testString.rfind("018",60) == testMyString.rfind("018",60)) << endl << endl;

    cout << ( testString.find("648"   ) ==  testMyString.find("648"   )) << endl;
    cout << ( testString.find("648",20) ==  testMyString.find("648",20)) << endl;
    cout << ( testString.find("648",40) ==  testMyString.find("648",40)) << endl;
    cout << ( testString.find("648",60) ==  testMyString.find("648",60)) << endl;
    cout << (testString.rfind("648"   ) == testMyString.rfind("648"   )) << endl;
    cout << (testString.rfind("648",20) == testMyString.rfind("648",20)) << endl;
    cout << (testString.rfind("648",40) == testMyString.rfind("648",40)) << endl;
    cout << (testString.rfind("648",60) == testMyString.rfind("648",60)) << endl << endl;

    cout << ( testString.find("012"   ) ==  testMyString.find("012"   )) << endl;
    cout << ( testString.find("012",20) ==  testMyString.find("012",20)) << endl;
    cout << ( testString.find("012",40) ==  testMyString.find("012",40)) << endl;
    cout << ( testString.find("012",60) ==  testMyString.find("012",60)) << endl;
    cout << (testString.rfind("012"   ) == testMyString.rfind("012"   )) << endl;
    cout << (testString.rfind("012", 9) == testMyString.rfind("012", 9)) << endl;
    cout << (testString.rfind("012",40) == testMyString.rfind("012",40)) << endl;
    cout << (testString.rfind("012",60) == testMyString.rfind("012",60)) << endl << endl;

    cout << ( testString.find("890"   ) ==  testMyString.find("890"   )) << endl;
    cout << ( testString.find("890",20) ==  testMyString.find("890",20)) << endl;
    cout << ( testString.find("890",40) ==  testMyString.find("890",40)) << endl;
    cout << ( testString.find("890",60) ==  testMyString.find("890",60)) << endl;
    cout << (testString.rfind("890"   ) == testMyString.rfind("890"   )) << endl;
    cout << (testString.rfind("890",20) == testMyString.rfind("890",20)) << endl;
    cout << (testString.rfind("890",40) == testMyString.rfind("890",40)) << endl;
    cout << (testString.rfind("890",60) == testMyString.rfind("890",60)) << endl << endl;

    cout << ( testString.find("789"   ) ==  testMyString.find("789"   )) << endl;
    cout << ( testString.find("789",30) ==  testMyString.find("789",30)) << endl;
    cout << ( testString.find("789",40) ==  testMyString.find("789",40)) << endl;
    cout << ( testString.find("789",60) ==  testMyString.find("789",60)) << endl;
    cout << (testString.rfind("789"   ) == testMyString.rfind("789"   )) << endl;
    cout << (testString.rfind("789",20) == testMyString.rfind("789",20)) << endl;
    cout << (testString.rfind("789",40) == testMyString.rfind("789",40)) << endl;
    cout << (testString.rfind("789",60) == testMyString.rfind("789",60)) << endl << endl;

    cout << "Every 6 lines there's a break;"                    << endl;
    cout << "other than that, each line should say \"true\"..." << endl << endl;

    cout << ( emptyString.find('0'   ) ==  emptyMyString.find('0'   )) << endl;
    cout << ( emptyString.find('0', 0) ==  emptyMyString.find('0', 0)) << endl;
    cout << ( emptyString.find('0',20) ==  emptyMyString.find('0',20)) << endl;
    cout << (emptyString.rfind('0'   ) == emptyMyString.rfind('0'   )) << endl;
    cout << (emptyString.rfind('0', 0) == emptyMyString.rfind('0', 0)) << endl;
    cout << (emptyString.rfind('0',20) == emptyMyString.rfind('0',20)) << endl << endl;

    cout << ( emptyString.find("0"   ) ==  emptyMyString.find("0"   )) << endl;
    cout << ( emptyString.find("0", 0) ==  emptyMyString.find("0", 0)) << endl;
    cout << ( emptyString.find("0",20) ==  emptyMyString.find("0",20)) << endl;
    cout << (emptyString.rfind("0"   ) == emptyMyString.rfind("0"   )) << endl;
    cout << (emptyString.rfind("0", 0) == emptyMyString.rfind("0", 0)) << endl;
    cout << (emptyString.rfind("0",20) == emptyMyString.rfind("0",20)) << endl << endl;

    cout << ( emptyString.find(""   ) ==  emptyMyString.find(""   )) << endl;
    cout << ( emptyString.find("", 0) ==  emptyMyString.find("", 0)) << endl;
    cout << ( emptyString.find("",20) ==  emptyMyString.find("",20)) << endl;
    cout << (emptyString.rfind(""   ) == emptyMyString.rfind(""   )) << endl;
    cout << (emptyString.rfind("", 0) == emptyMyString.rfind("", 0)) << endl;
    cout << (emptyString.rfind("",20) == emptyMyString.rfind("",20)) << endl << endl;

    const string   testString2   = "0000";
    const MyString testMyString2 = "0000";

    cout << "The final two lines should say \"true\"..." << endl << endl;

    cout << ( testString2.find("0001") ==  testMyString2.find("0001")) << endl;
    cout << (testString2.find("00001") == testMyString2.find("00001")) << endl << endl;

    return 0;
}