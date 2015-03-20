#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int k;
    cin >> k;
    int t[k+1];

    for(int i=0; i<k+1; i++){

        cin >> t[i];

    }

    int osiagalna = 0;
    for(int i=0; i<k+1; i++){

        if(i==0){
            osiagalna=t[i];
        }

        else{
            if(osiagalna<pow(2,i)-1)
                osiagalna=osiagalna+osiagalna%((int)(t[i]*pow(2,i)));
            else
                osiagalna=osiagalna+t[i]*pow(2,i);
        }
        //cout << i << " " << (int)(t[i]*pow(2,i)) << " " << osiagalna << endl;
    }



    cout << osiagalna+1;


}
