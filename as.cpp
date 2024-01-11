#include <iostream>
using namespace std;
struct PhanSo {
    int tuSo;
    int mauSo;
};


int ucln(int a, int b) {
    return (b == 0) ? a : ucln(b, a % b);
}

void toigian(PhanSo &ps) {
    int uclnChung = ucln(ps.tuSo, ps.mauSo);
    ps.tuSo /= uclnChung;
    ps.mauSo /= uclnChung;
}

void nhap(PhanSo &ps) {
    cout << "Nhap tu so: ";
    cin >> ps.tuSo;
	do {
	    cout << "Nhap mau so: ";
	    cin >> ps.mauSo;
	    if (ps.mauSo == 0 || ps.mauSo < 0)  cout << "Nhap lai mau so di Stuqid ! " << endl;
	} 
	while (ps.mauSo == 0 || ps.mauSo < 0);
    toigian(ps);
}


void in( PhanSo &ps) {
    cout << ps.tuSo << "/" << ps.mauSo;
}


PhanSo nhanPhanSo( PhanSo &ps1,  PhanSo &ps2) {
    PhanSo ketQua;
    ketQua.tuSo = ps1.tuSo * ps2.tuSo;
    ketQua.mauSo = ps1.mauSo * ps2.mauSo;
    toigian(ketQua);
    return ketQua;
}

PhanSo congPhanSo( PhanSo &ps1, PhanSo &ps2) {
    PhanSo ketQua;
    ketQua.tuSo = ps1.tuSo * ps2.mauSo + ps2.tuSo * ps1.mauSo;
    ketQua.mauSo = ps1.mauSo * ps2.mauSo;
    toigian(ketQua);
    return ketQua;
}

int main() {
    PhanSo phanSo1, phanSo2;
    cout << "Nhap phan so 1:\n";
    nhap(phanSo1);
    cout << "\nNhap phan so 2:\n";
    nhap(phanSo2);
    cout << "\nPhan so toi gian 1: ";
    in(phanSo1);
    cout << "\nPhan so toi gian 2: ";
    in(phanSo2);
    PhanSo tich = nhanPhanSo(phanSo1, phanSo2);
    PhanSo tong = congPhanSo(phanSo1, phanSo2);
    cout << "\n\nKet qua nhan: ";
    in(tich);
    cout << "\nKet qua cong: ";
    in(tong);
   
}

