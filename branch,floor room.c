/*
NAME:KEITH BARRACK OJUANG
REGNO:PA106/G/29044/25
DESCRIPTION:DISPLAY OF BRANCH ROOM
*/

 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

int main(){
	int chain[3][5][10]; // 3 branches, 5 floors,10 rooms each
	int floor,branch, room;
	int totalVacant = 0;
    int totalOccupied;
	//Display random occupancy (1 = occupied, 0 = vacant)

	srand(time(0));

	for(floor = 0; floor < 5; floor++){
		for(branch = 0; branch < 3; branch++){
			for(room = 0; room < 10; room++){
			  chain[floor][branch][room] == rand() % 2;

			  if(chain[floor][branch][room] == 0)
                totalOccupied++;
			}
		}
	}

	//Calculate total rooms occupied across all branches
	printf("Sample room values:\n");
	for(floor = 0; floor < 5; floor++){
	    printf("Floor %d:\n", floor + 1);
		for(branch = 0; branch < 3; branch++){
                printf("Branch %d:\n", branch + 1);
			for(room = 0; room < 10; room++){
                    printf("%d: ", chain[branch][floor][room]);
			    if(chain[floor][branch][room] == 1)
			    	totalVacant++;
			}
		}
	}

	printf("Total rooms occupied across all branches: %d\n", totalOccupied);
	printf("Total rooms vacant across all branches: %d\n", totalVacant);

  return 0;
}
