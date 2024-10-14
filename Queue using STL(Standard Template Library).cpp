//Name:Alok Chawat
//PRN:23070123016
//Aim:Implementation of Queue using Array to perform a code with the use of STL(Standard Template Library)

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

q.push(30);
q.push(20);
q.push(10);

cout<< "Front element before pop: " <<q.front() <<endl;

q.pop();

cout<< "Front element after pop: " <<q.front() <<endl;

    return 0;
}


/*Output:
Front element before pop: 30
Front element after pop: 20
*/