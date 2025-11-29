

#include <stdio.h>

int main()
{
	int n;
	int array[100];
	printf("Do dai cua mang:");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &array[i]);
	}
	
	int soChiaHet3 = 0;
	int dem = 0;
	double tb;
	for (int i = 0; i < n; i++) {
		if (array[i] % 3 == 0) {
			soChiaHet3 += array[i];
			dem++;
		}
	}
	tb = soChiaHet3*1.0 / dem;
	printf("Trung binh cong cac so chia het cho 3 trong mang la: %.1lf", tb);
	return 0;
}
