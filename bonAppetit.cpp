
#include <iostream>

using namespace std;

int main(){
    int i,n,k,BrianCharged,bill,total = 0;
    cin>> n>>k ;

    int are[n];

    for( i = 0; i < n; i++){
        cin>> are[i];

        total += are[i];
    }

    cin>> BrianCharged ;

    bill = total - are[k];
    bill /=2;

    if(bill == BrianCharged) cout<< "Bon Appetit" <<endl;
    else cout<< BrianCharged - bill <<endl;

    return 0;
}
