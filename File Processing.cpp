#include <stdio.h>
#include <string.h>

//program ini menerapkan file processing untuk mencocokan 2 string 

struct data{ //inisialisasi struct
	char awal[45];
	char akhir[45];
	char tmp[45];
};

int main(){
	struct data kata[105];
	FILE *fp = fopen("testdata.in","r"); //penggunaan file processing
	int a,b;
	
	fscanf (fp,"%d\n",&a);
	for (int i=0;i<a;i++){
		fscanf(fp," %[^#]#%[^\n]\n", kata[i].awal, kata[i].akhir);
	}
	fscanf (fp,"%d\n",&b);
	for (int j=0;j<b;j++){
		fscanf (fp," %[^\n]\n",kata[j].tmp);
		printf ("Case #%d: ",j+1);
		int ctr=0;
		for (int k=0;k<a;k++){
			if (strcmp(kata[j].tmp,kata[k].awal)==0){ //mencocokan string kata di awal dan tmp
				printf("%s\n",kata[k].akhir);
				ctr=1;
				break;
			}
		}
		if (ctr==0) printf("N/A\n");
	}
	fclose(fp);

	return 0;
}

//Example:
//3
//kakak#adik
//pensil#buku
//air#api
//1
//pensil
//
//Expected Result:
//buku
