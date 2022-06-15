#include <iostream>
using namespace std;

class buku{
	public : 
	void input();
	void proses();
	void output();
	
	private:
	int n, brs, klm, temp;
	int data[40];
	int d=0;
	int c[40][40];
};

void buku::input(){
	cout<<"Masukkan banyaknya buku : ";
	cin>>n;
	
	for (int i=0; i<n; i++)
	{
		cout<<"Nomor buku ke-"<<i+1<<" = ";
		cin>>data[i];
	}
	
	cout<<"\nData 1 dimensi : "<<endl;
	for (int j=0; j<n; j++)
	{
		cout<<data[j]<<" ";
	}
	cout<<endl<<"\n";
}

void buku::proses(){
  for (int i=0; i<n; i++){
		for (int j=0; j<n-1; j++){
			if (data[j] > data[j+1]){
				temp = data[j];
				data[j] = data[j+1];
				data[j+1] = temp;
			}
		}
	}
	cout<<"\n Hasil Data 1 dimensi yang diurutkan : "<<endl;
	for (int i=0; i<n; i++){
		cout<<data[i]<<"  ";
	}
  cout<<endl;
}
void buku::output(){
  
  cout<<"\nMasukkan banyaknya baris : ";
	cin>>brs;
	cout<<"Masukkan banyaknya kolom : ";
	cin>>klm;
	cout<<endl;
	cout<<"Hasil konversi ke 2 dimensi : "<<endl;
	for (int k=0; k<brs; k++)
	{
		for (int l=0; l<klm; l++)
		{
			c[k][l]=data[d];
			d++;
		}
	}
	
	for (int k=0; k<brs; k++)
	{
		for (int l=0; l<klm; l++)
		{
			cout<<c[k][l]<<" ";
		}
		cout<<endl;
	}
}


int main(){
  buku x;
  x.input();
  x.proses();
  x.output();
}