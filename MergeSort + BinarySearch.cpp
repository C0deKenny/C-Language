#include <stdio.h>
#include <string.h>

//program ini berisi penerapan merge sort sebagai salah satu algoritma sorting
//dan binary search. program ini dapat mengurutkan angka yang di input secara ascending
//lalu dapat dicari letak urutannya menggunakan binary search.
//jika angka yang dicari tidak ditemukan, maka akan menghasilkan output "-1".

void merge(int lf, int md, int rg, int no[]){//merge sort
    int left=md-lf+1;
    int right=rg-md;
    int lft[left];
	int rgt[right];
    for (int i=0;i<left;i++){
        lft[i]=no[lf+i];
    }
    for (int j=0;j<right;j++){
        rgt[j]=no[md+j+1];
    }
    int k=0;
	int l=0;
	int index=lf;
    while (k < left && l < right){
        if (lft[k] < rgt[l]){
            no[index++] =lft[k++];
        }
        else{
            no[index++] =rgt[l++];
        }
    }
    for (k; k<left; k++){
        no[index++] =lft[k];
    }
    for (k; k<right; k++){
        no[index++] =rgt[k];
    }
}

void split(int lf, int rg, int no[]){
    if (lf>=rg){
        return;
    }
    int md=0; 
	md=lf+((rg-lf)/2);//pemecahan 2
    split(lf, md, no);
    split(md+1, rg, no);
    merge(lf, md, rg, no);
}

int binarySearch(int no[], int search, int start, int end){
	int mid=0;
	while (start<=end){
		mid=(start+end)/2;
		if (search==no[mid]){
			return mid+1;
		}
		else if (search<no[mid]){
			end=mid-1;
		}
		else if (search>no[mid]){
			start=mid+1;
		}
	}	
	return -1;
}

int main(){
	int tc=0,dt=0;
	int no[100009];
	scanf (" %d",&tc);
	for(int i=0; i<tc;i++){
		scanf (" %d",&no[i]);
	}
	split (0, tc-1, no);
	scanf (" %d",&dt);
	int num=0;
	for (int j=0;j<dt;j++){
		scanf (" %d",&num);
		int hasil=binarySearch(no,num,0,tc-1);
		printf ("%d\n",hasil);
	}
	
	return 0;
}

//Example:
//5
//164 174 123 946 266
//4
//946
//Expected Result: 5
//174
//Expected Result: 3
//123
//Expected Result: 1
//789
//Expected Result: -1
