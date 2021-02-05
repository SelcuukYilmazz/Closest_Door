#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    float x_cor,y_cor;
    float array[3]={};
    float* i2;
    int index;


    cin >> x_cor;
    cin >> y_cor;

    array[0] = ((pow(x_cor-0,2)+pow(y_cor-0,2)));
    array[1] = (pow(x_cor-55,2)+pow(y_cor-30,2));
    array[2] = (pow(x_cor-10,2)+pow(y_cor-100,2));

    i2 = std::min_element(array,array+3);

    for (int i = 0; i < 3; i++)
    {
        if (*i2 == array[i])
        {
            index = i;
        }
    }

    cout << index+1 <<" Numarali Kapidan Cikiniz" << endl ;

    return 0;
}
