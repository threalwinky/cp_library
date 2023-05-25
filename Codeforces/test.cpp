#include<iostream>
using namespace std;
int main(){
    freopen("sample.out", "w", stdout);
    srand(time(NULL));
    cout << 100000 << " " << 99999 << "\n";
    for (int i=1; i<=99999; i++){
        int z = rand()%1000001;
        cout << i << " " << i + 1 << " " << z << "\n";
    }
}
