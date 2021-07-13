#include <iostream>
#include <cmath>
using namespace std;

double fCirculo(int x, int size){
    return sqrt(pow(size, 2) - pow(x, 2));
}

void pasarCoordenadas(int arr[], int size){
    int counter = 0;
    for(int i = 0 ; i < size+1 ; i++){                    
        for(int b = size / -2 ; b < size / 2+1 ; b++){          
            int x = b;
            int y = size / 2 - i;
            double height;
            height = fCirculo(x, size / 2);
            //cout << height << '-' << double(y) << ' ';
            double diff = height - double(y);
            double diff2 = height + double(y);
            if (((diff < 0 && diff > 0.5) || (diff2 < 0 && diff2 > 0.5) ) || ((diff > 0 && diff < 0.5) || (diff2 > 0 && diff2 < 0.5)) || diff == 0 || diff2 == 0){
                cout << " + ";
                arr[counter] = 1;
            }else{
                cout << ' ';
                arr[counter] = 0;
            }
            counter++;
        }
            cout << endl;
    }
}



int main(){
    int size; //Tamaño de la matriz
    cout << "Whats the radius of the circle?: " << endl;
    cin >> size;
    int *p;
    p = new int[size * size];
    pasarCoordenadas(p, size);
}