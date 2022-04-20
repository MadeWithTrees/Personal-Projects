#include <iostream>
#include <stdlib.h>

using namespace std;

int option1;
int option2;
int option3;

void checkOption(int n){
    if (n == 1){

    cout << "Nothingness. Is there any meaning to living in this world?" << endl; // Statement 2
    cout << " • Pray to God. " << endl; // If this option is chosen, jump to statement 3
    cout << " • Hold true to your own will. " << endl; // If this option is chosen, jumps to statement 1
    cout << " • I don't care. I don't need any of this! " << endl;
}

    if (option1 = 1){

    cout << "God. How did God create us?" << endl; // Statement 3
    cout << " • By random chance. " << endl; // If this option is chosen, jumps to statement 4
    cout << " • From nothingness. " << endl; // If this option is chosen, jumps to statement 2
    cout << " • I don't care. I don't need any of this! " << endl; // If this option is chosen, jumps to statement...
}

    if(option1 = 1){
    
    cout << "Chance. Was this world created by random chance? " << endl; // Statement 4
    cout << " • All is according to God's will. " << endl; // If this option is chosen, jumps to statement 3
    cout << " • It was not random. This world is filled with nothingness. " << endl; // If this option is chosen, jumps to statement 2
    cout << " • I don't care. I don't need any of this! " << endl; // If this option is chosen, jumps to statement
    }
}

int main(){

    cout << "Will. From where does our will come? " << endl; // Statement 1
    cout << " • It is born from nothingness. " << endl; // If this option is chosen, jumps to statement 2
    cout << " • It is given to us by God. " << endl; // If this option is chosen, jumps to statement 3
    cout << " • I don't care. I don't need any of this! " << endl; // If this option is chosen, jumps to statement...
    return 0;

}

