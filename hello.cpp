#include <iostream>
#include <machine/limits.h>
#include <unistd.h>
#include <sys/ipc.h>
#include <sys/shm.h>

using namespace std;

int main(){
	cout<<"Hello World!"<<endl;
	int     shmid;
        
        if((shmid = shmget( keyval, segsize, IPC_CREAT | 0660 )) == -1)
        {
                return(-1);
        }

	return 1;
}
