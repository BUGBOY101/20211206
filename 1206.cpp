#define	_CRT_SECURE_NO_WARNINGS 1



//#include<iostream>
//using namespace std;
//void memery2(int a[], int m, int b[], int n) {
//	int i = m - 1, j = n - 1, p = m + n - 1;
//	while (i >= 0 && j >= 0)//a��ʣ���Ѱ�������
//		a[p--] = a[i] > b[j] ? a[i--] : b[j--];
//	while (j >= 0)
//		a[p--] = b[j--];
//}
//
//void memery(int a[], int m, int b[], int n) {
//	int c[200], i = 0, j = 0, k = 0;
//	while (i < m && j < n) {
//		c[k++] = a[i] < b[j] ? a[i++] : b[j++];
//	}
//	while (i < m)
//		c[k++] = a[i++];
//	while (j < n)
//		c[k++] = b[j++];
//	for (i = 0; i < m + n; i++)
//		a[i] = c[i];
//}
//int main() {
//	int a[200], b[100];
//	int m, n, i;
//	cout << "������a����Ԫ�ظ�����";
//	cin >> m;
//	cout << "������b����Ԫ�ظ�����";
//	cin >> n;
//	cout << "a:";
//	for (i = 0; i < m; i++)
//		cin >> a[i];
//	cout << "b:";
//	for (i = 0; i < n; i++)
//		cin >> b[i];
//	memery2(a, m, b, n);
//	cout << "�ϲ������飺";
//	for (i = 0; i < m + n; i++)
//		cout << a[i] << " ";
//	cout << endl;
//}