// Baitapbuoi12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
class DT {
private:
    int n;
    float *heso;
public:
    DT() {
        n = 0;
    }
    friend istream &operator >> (istream& is, DT& d) {
        cout << "Nhap n: ";
        is >> d.n;
        d.heso = new float [d.n + 1];
        for (int i = d.n; i >=0; i--) {
            cout << "He so bac n " << i << " = ";
            is >> d.heso[i];
        }
        return is;
    }
    friend ostream& operator << (ostream& os, DT d) {
        for (int i = d.n; i >=0; i--) {
            if (d.heso[i] != 0) {
                os << "x^" << i << "*(" << d.heso[i] << ") ";
                if (i != 0) os << "+ ";
            }
        }
        return os;
    }
    //tinh gia tri khi biet x
    float Giatri(float &x) {
        cout << "Nhap gia tri x: "; cin >> x;
        float tong = 0;
        for (int i = 0; i < n + 1; i++) {
            tong = tong + heso[i]*pow(x, i);
        }
        return tong;
    }
    DT operator + (DT y)
    {
        int Max = (n > y.n) ? n : y.n;
        int Min = (n < y.n) ? n : y.n;
        DT t;
        t.n = Max;
        t.heso = new float[t.n + 1];
        for (int i = 0; i <= Min; ++i)
        {
            t.heso[i] = heso[i] + y.heso[i];
        }
        if (Max == n)
        {
            for (int i = Min + 1; i <= Max; ++i)
            {
                t.heso[i] = heso[i];
            }
        }
        else
        {
            for (int i = Min + 1; i <= Max; ++i)
            {
                t.heso[i] = y.heso[i];
            }
        }
        return t;
    }
    DT operator - (DT y)
    {
        int Max = (n > y.n) ? n : y.n;
        int Min = (n < y.n) ? n : y.n;
        DT h;
        h.n = Max;
        h.heso = new float[h.n + 1];
        for (int i = 0; i <= Min; ++i)
        {
            h.heso[i] = heso[i] - y.heso[i];
        }
        if (Max == n)
        {
            for (int i = Min + 1; i <= Max; ++i)
            {
                h.heso[i] = heso[i];
            }
        }
        else
        {
            for (int i = Min + 1; i <= Max; ++i)
            {
                h.heso[i] = 0 - y.heso[i];
            }
        }
        return h;
    }
};
int main()
{
    DT a; 
    cin >> a;
    float x; ;
    cout << a.Giatri(x) << '\n';
    DT b;
    cin >> b;
    cout << "\nPhep cong: " << (a + b);
    cout << "\nPhep tru: " << (a - b);
}

