#include <cstdlib>     /* system, NULL, EXIT_FAILURE */
#include <iostream>
#include <fstream>
#include <string>

int main()
{
    using namespace std;

    if ( !system(NULL) ) { return -1; }

    string path = std::string(getenv("TMP")) + "/curl_labels.txt";
    std::string cmd = "curl https://api.github.com/repos/district10/blog/issues/7/labels > " + path;
    system( cmd.c_str() );

    ifstream input( path.c_str() );
    if ( !input.is_open() ) { return -1; }

    string line;
    int index = 0;
    while (getline(input, line)) {
        cout << ++index << line << endl;
    }
    
    return 0;
}