#include <iostream>

using namespace std;

int algoritmo(int n) {
    int cycleLenght = 0;
    while (true){
        cycleLenght++;
        if(n==1){
            return cycleLenght;
        }
        else if(n%2!=0){
            n = 3*n + 1;
        }else{
            n = n/2;
        }
    }
}

int main() {

    int i,j,n1,n2, mayor = 0;

    while(cin >> i >> j){
        n1 = i;
        n2 = j;
        if(i>j)
            swap(i,j);
        for (int k = i; k <= j; ++k) {
            if (algoritmo(k) > mayor) {
                mayor = algoritmo(k);
            }
        }
        cout << n1 << " " << n2 << " " << mayor << endl;
        mayor = 0;
    }




    return 0;
}