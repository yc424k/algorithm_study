#include <iostream>
using namespace std;
int main(){
    int H,M,S;
    cin >> H >> M >> S;
    int time = 0;
    int clock;
    cin >> clock;
    time = clock + H*3600+M*60+S
    H = time/3600%24
    M = time/60%60
    S = time%60
    cout >> H >>" " >>M>>" ">>S;
}