//
//  main.cpp
//  C867
//
//  Created by Tim Austin on 3/2/23.
//

#include <iostream>
#include <vector>
using namespace std;

int* int_p_array {nullptr};

void add(int n) {
    if (int_p_array == 0) {
        int_p_array = new int(n);
    } else {
        new int(n);
    }
}

void exe() {
    add(1);
    add(2);
    add(3);
    add(4);
    
    for (int i = 0; i < 4; i++) {
        cout << *int_p_array + i << endl;
    }
}

int main() {
    exe();
    
}
