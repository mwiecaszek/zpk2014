#include <iostream>
 using namespace std;

int main()
{
 unsigned int A, B, K;
 unsigned int liczba_krzesel, x, y;
 cin>>A>>B>>K;

 if((A<K)||(B<K))
    liczba_krzesel=0;
 else
 {
            x=A/K;
            y=B/K;
            /*w ten sposob dostajemy przeskalowany stol i krzesla (znormalizowane do 1 cm)*/
            liczba_krzesel=x*y;

            /*gdy x=2 i y=2 to maksymalnie mozemy zmiescic 4 krzesla po 1 cm*/

            if((x>2)&&(y>2))
            liczba_krzesel=liczba_krzesel-((x-2)*(y-2));

}
cout<<liczba_krzesel<<endl;

}







