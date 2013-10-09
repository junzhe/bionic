#include <iostream>
#include <machine/limits.h>
#include <unistd.h>

using namespace std;

int main(){
	alarm(10);
	cout<<"Hello World!"<<endl;
	return 1;
}
