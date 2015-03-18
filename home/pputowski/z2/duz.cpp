#include <iostream>
#include <string>
using namespace std;

int main() {
    string l, z, ll, out = "NIE";
    bool r = true, wr = true, mr = true;
    cin >> l >> z >> ll;
    if( l.length() == ll.length() )
        {
        for( unsigned long i = 0; i < l.length(); i++ )
            {
            wr = wr && ( l[i] >= ll[i] );
            mr = mr && ( l[i] <= ll[i] );
            r = r && ( l[i] == ll[i] );
            }
        }
    else
        if( l.length() > ll.length() )
            {
            r = false;
            mr = false;
            }
        else
            {
            r = false;
            wr = false;
            }
    if( z.length() == 2 )
        {
        if( z[0] == '=' && r )
            out = "TAK";
        if( z[0] == '!' && !( r ) )
            out = "TAK";
        if( z[0] == '<' && mr )
            out = "TAK";
        if( z[0] == '>' && wr )
            out = "TAK";
        }
    else
        {
        if( z[0] == '<' && mr && !r )
            out = "TAK";
        if( z[0] == '>' && wr && !r )
            out = "TAK";
        }
    cout << out << endl;
}

