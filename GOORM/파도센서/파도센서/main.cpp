#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

struct wave{
    int order;
    double distance;
    bool check = false;
};

bool cmp(const wave &p1, const wave &p2){
    if(p1.distance < p2.distance)
        return true;
    else
        return false;
}

int main(){
    int X,Y,r;
    cin >> X >> Y >> r;

    wave wave[5];
    for(int i = 0; i < 5; i ++){
        int x, y;
        cin >> x >> y;
        wave[i].order = i + 1;
        wave[i].distance = sqrt(pow(X-x,2) + pow(Y-y,2));
        if(wave[i].distance <= r)
            wave[i].check = true;
    }
    sort(wave, wave+5, cmp);

    for(int i = 0; i < 5; i++){
        if(wave[i].check == true){
            cout << wave[i].order << endl;;
            return 0;
        }
    }

    cout << "-1" << endl;

    // for(int i =0; i < 5;i++){
    //     cout << wave[i].distance << " ";
    // }
}