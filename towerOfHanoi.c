#include <stdio.h>

// Recursive function to solve Tower of Hanoi
void towerOfHanoi(int n, char source, char auxiliary, char target) {
    // Base case: if only one disk, move it directly
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, target);
        return;
    }

    // Move n-1 disks from source to auxiliary using target as buffer
    towerOfHanoi(n - 1, source, target, auxiliary);

    // Move the nth (largest) disk from source to target
    printf("Move disk %d from %c to %c\n", n, source, target);

    // Move the n-1 disks from auxiliary to target using source as buffer
    towerOfHanoi(n - 1, auxiliary, source, target);
}

int main() {
    int n;

    // Take number of disks as input
    printf("Enter the number of disks: ");
    scanf("%d", &n);

    // 'A' is the source, 'B' is the auxiliary, 'C' is the target
    towerOfHanoi(n, 'A', 'B', 'C');

    return 0;
}

//             Start
//                |
//        Is n == 1? (Base case)
//           /        \
//         Yes         No
//         |            |
//  Move disk n from     |
//   Source → Target     |
//        |              |
//       End        Move n-1 disks from 
//                    Source → Auxiliary 
//                      (Using Target)
//                         |
//              Move disk n from Source → Target
//                         |
//              Move n-1 disks from 
//              Auxiliary → Target
//                (Using Source)
//                         |
//                       End
