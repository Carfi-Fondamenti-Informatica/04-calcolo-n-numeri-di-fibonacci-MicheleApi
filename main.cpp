#include <iostream>
using namespace std;

int fattoriale(int a){
int risultato = 1;
for (int i=1; i<=a; i++){
    risultato = risultato*i;
}
return risultato;
}

int fattoriale2 (int a){
    int risultato =1;
    while (a>1) {
        risultato *=a;
        a--;
    }
    return risultato;
}

int fattoriale3 (int a){
    int risultato = 1;
    for (int i=a; i>0; i--){
        risultato *=1;
    }
    return risultato;
}

int main() {
    cout << "fatt(4)=" << fattoriale (4) << endl;
    cout << "fatt (7)=" << fattoriale (7) << endl;
    cout << "fatt (11)=" << fattoriale (11) << endl;
    return 0;
}
