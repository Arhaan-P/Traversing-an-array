#include <iostream.h>
#include <conio.h>
void main() {
	clrscr();
	int arr[5]= {2,4,3,7,8};
	int s=0, *p ;
	p=arr;
	cout<<"Index \t Contents \t Address \t Sum \t Size \n ";
	for (int i=0; i<5; i++){
		s=s+*(p+i);
		cout<<i+1<<" \t"<<*(p+i)<<" \t \t"<<sizeof(arr[i])<<endl;
	}
	getch();
}