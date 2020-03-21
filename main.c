#include <stdio.h>
#include <stdlib.h>

//nomer 1

int main(){
	int n, i, j;
	int temp;
	int cari;
	int low, high, mid, index, cek_akhir_array;
	printf("--Input--\n");
	printf("Jumlah Data : ");
	scanf("%d", &n);
	int data[n];

	for(i = 0; i<n; i++){
		printf("Data ke %d : ", i);
		scanf("%d", &data[i]);
	}
	printf("\n");
	for(i = 0; i<n-1; i++){
		for(j = 0; j<n-1-i; j++){
			if(data[j] > data[j+1]){
				temp = data[j+1];
				data[j+1] = data[j];
				data[j] = temp;
			}
		}
	}
	printf("Data setelah diurutkan:\n");
	for(i = 0; i<n; i++){
		printf("%d\t|", data[i]);
	}

	printf("\nData yang dicari : ");
	scanf("%d", &cari);

	low = 0;
	high = n - 1;
	index = 0;
	cek_akhir_array = 1;

	while(low <= high){
		mid = (low + high)/2;
		if( data[mid] == cari ){
			index = mid;
			cek_akhir_array = 0;
			printf("\nData ditemukan pada indeks : %d\n", index);
			break;
		}else{
			if( data[mid] > cari){
				high = mid - 1;
			}else{
				low = mid +1;
			}
		}
	}

	if(cek_akhir_array){
		printf("]nData tidak ditemukan\n");
	}

	return 0;

}
