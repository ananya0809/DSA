#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	int &r = a;// & at time of declaration means reference. Refedrence IS initialized
	//r = a; reference is NOT initialized.
	
	int b= 25;
	r = b; // this doesnt mean that r is referenced to b, it means that the value of b is stored in r.
	printf("%d", a);// since r is referenced to a, thus, any value stored in r will be stored in a, because a is nothing but r.
	return 0;
}
// reference doesnt consume additional memory, it uses the same memory of the variable its assigned to.
// thus, r consumes same memory that is of a.
