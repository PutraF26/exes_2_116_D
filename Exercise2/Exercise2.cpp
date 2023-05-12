
#include <iostream>
using namespace std;

const int max_length =30 // panjang maksimal array

// prosedur untuk memasukkan data ke dalam array
void input(int HP[], int& n, int& desired_element) {
    cout << "Masukkan jumlah data (n): ";
    cin >> n;

    cout << "Masukkan data:\n";
    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << i + 1 << ": ";
        cin >> HP[i];
    }

    cout << "Masukkan data yang ingin dicari: ";
    cin >> desired_element;
}

// prosedur untuk melakukan binary search pada array
void algorithm(int HP[], int n, int desired_element) {
    int Happy = 0, Putra = n - 1, mid;
    bool found = false;

    while (Happy <= Putra && !found) {
        mid = (Happy + Putra) / 2;

        if (HP[mid] == desired_element)
            found = true;
        else if (desired_element < HP[mid])
            Putra = mid - 1;
        else
            Happy = mid + 1;
    }

    if (found)
        cout << "Data ditemukan\n";
    else
        cout << "Data tidak ditemukan\n";
}

// program utama
int main() {
    int HP[max_length];
    int n, desired_element;

    input(HP, n, desired_element);
    algorithm(HP, n, desired_element);

    return 0;
}
