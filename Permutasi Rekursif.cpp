#include <stdio.h>

//program ini menerapkan konsep rekursif untuk mencari seluruh kemungkinan susunan angka

// result=hasil akhir dari peluang yang muncul
// x=angka yang menunjukan berapa kali angka akan dimasukkan ke result
// maxnum=nilai maksimum angka dimulai dari 1
void recursive(int result, int x, int maxnum, int arr[]){
	if(x==0) printf("%d\n",result);
   	else{
    	for (int j=1;j<=maxnum;j++){
      		if (!arr[j]){
        		arr[j]=1;
        		recursive((result*10+j), (x-1), maxnum, arr);
        		arr[j]=0;
      		}
   		}
  	}
}

int main(){
	int a;
	scanf(" %d",&a); //jumlah test case
 	for(int i=0;i<a;i++){
  		int b;
  		int arr[8]={0};
  		scanf(" %d",&b);
  		printf("Case #%d:\n",i+1);
		recursive(0,b,b,arr);
 	}
  return 0;
}

//Example:
//2
//2
//Expected Result:
//Case #1:
//12
//21
//3
//Expected Result:
//Case #2:
//123
//132
//213
//231
//312
//321


