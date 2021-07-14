#include <iostream>
#include <cmath>
using namespace std;

double fCirculo(int x, int size){
    return sqrt(pow(size, 2) - pow(x, 2));
}
double squareX(int x){
    return pow(x, 2);
};
double cubeX(int x){
    return pow(x, 3);
}
double sqrtX(int x){
    return sqrt(x);
}
double randomFunction(int x){
    return pow(x, 3) - pow(x, 2) + 6;
}
double rationalX(int x){ // doesnt work because return a lot of decimals
    return 1/x;
}

void pasarCoordenadas(int arr[], int size){
    int counter = 0;
    for(int i = 0 ; i < size+1 ; i++){                    
        for(int b = size / -2 ; b < size / 2+1 ; b++){          
            int x = b;
            int y = size / 2 - i;
            double height;
            height = randomFunction(x); //change this with your own function
            double diff;
            diff = height - double(y);
            if ((diff < 0 && diff > 0.5 ) || (diff > 0 && diff < 0.5) || diff == 0){
                cout << "+";
                arr[counter] = 1;
            }else{
                if(y == 0){
                    cout << " - ";
                }else if(x == 0){
                    cout << " | ";
                }
                else{
                    cout << ' ';
                    arr[counter] = 0;
                }
            }

            counter++;
        }
            cout << endl;
    }
}


int main(){
    int size; //Tamaño de la matriz
    cout << "Whats the extension of the graph (m * n)?: " << endl;
    cin >> size;
    int *p;
    p = new int[size * size];
    pasarCoordenadas(p, size);
}
