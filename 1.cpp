#include <iostream>
using namespace std;

int main(){
    system ("cls");
    int var;
    // int arry[5]

    // for (int  1 = 0; <=7; 1++) {
    // cout << "masukkan nilai array elemen ke - "<< i+1 <<":";
    // cin >> var;
    // arr [i] = var;
    // }

    // for  (int i = 0; i < 7; i++){
    //     cout << " elemen ke -  "
    // }




    cout << "masukkan ukuran array :";
    cin >> var;

    int* arr = new int [var];

    cout << " masukkan " << var << " angka : \n";
    for (int i = 0 ; i < var; i++ ){
    cin >> arr[i];

    }

     cout << " isi array :";
      for (int i = 0 ; i < var; i++ ){
    cout << arr[i] << " ";
      }


}