#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify the code above this line
//Write definition of shuffle() using pointer after this line. 

void shuffle(int *a,int *b,int *c,int *d){

	int random = rand()%4;
	int temp;

	switch(random){
		case 0:
		temp = *b;
		*b = *a;
		*a = temp;
		break;

		case 1:
		temp = *c;
		*c = *b;
		*b = temp;
		break;

		case 2:
		temp = *d;
		*d = *c;
		*c = temp;
		break;

		case 3:
		temp = *d;
		*d = *a;
		*a = temp;
		break;

	}


}