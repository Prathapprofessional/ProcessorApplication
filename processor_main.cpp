#include <iostream>

#include "audio.hpp"

#include "video.hpp"

using namespace std;

int main()
{
int option;
cout << "Hello Welcome to Processor application" << endl <<"What kind of file you want to process? select one" << endl << "1.Audio" << endl << "2.Video" << endl << "3. other file format" << endl <<"4.exit" << endl;
cin >> option;

switch (option)
{
case 1:
    audioprocessing();
    break;
case 2:
    videoprocessing();
    break;
case 3:
    cout << "Only Audio and Video files. Exiting application";  
    break;
}

return 0;

}
