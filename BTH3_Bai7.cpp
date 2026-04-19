#include <iostream>
using namespace std;
void nhapmang(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] : ";
		cin >> a[i];
	}
}
int* timKiem(int *a, int n, int x)
{
if (n == 0)
	return NULL;
if (*a == x)
	return a;
return timKiem(a + 1, n - 1, x);
}
int main()
{
	int n, x;
	do
	{
		cout << "Nhap so luong phan tu: ";
		cin >> n;
		if (n <= 0 || n > 30)
			cout << "So luong phan tu khong cho phep!Vui long nhap lai" << endl;
	}while(n <= 0 || n > 30);
	int* a = new int[n];
	nhapmang(a, n);
	cout << "Nhap gia tri can tim: ";
    cin >> x;
    int* kq = timKiemDeQuy(a, n, x);
    if (kq != NULL) {
        cout << "Tim thay tai vi tri: " << (kq - a) << endl;
        cout << "Dia chi: " << kq;
    }
    else {
        cout << "Khong tim thay!";
    }
	
	
	delete[] a;
	a = NULL;
	return 0;
}
