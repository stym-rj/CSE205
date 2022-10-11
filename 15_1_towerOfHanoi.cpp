#include <iostream>


void TOH(int n, char beg, char aux, char end) {
    static int count = 0;
    if(n == 1) {
        std :: cout << ++count << ". " << "move disk " << n << " from " << beg << " to " << end << std :: endl;
        return;
    }
    
    TOH(n - 1, beg, end, aux);

    std :: cout << ++count << ". " << "move disk " << n << " from " << beg << " to " << end << std :: endl;       // TOH(1, beg, aux, end) - > this means beg is assigned to end (the base case of the recursion)

    TOH(n - 1, aux, beg, end);
}

int main() {
    int n;
    std :: cout << "Enter the no. of disks : " ;
    std :: cin >> n;

    TOH(n, 'B', 'A', 'E');
}