#include <iostream>
using namespace std;

int main()  {
    unsigned int t;
    unsigned short g, m, s;
    cin >> t;
    s = t%60; /*reszta z dzielenia przez 60*/
    m = ((t - s)%3600)/60; /*odejmujemy wyliczon¹ resztê i uzyskujemy pe³n¹ liczbê minut wyra¿on¹ w sekundach */
    g = (t - s - 60*m)/3600;
    cout << g << "g" << m << "m" << s << "s" << endl;
}
