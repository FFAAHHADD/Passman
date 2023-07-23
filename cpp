#include <iostream>
#include<string>
#include<fstream>
using namespace std;

int main(int argc, char* argv[])
{
  
    if (strcmp(argv[1], "-a") == 0) {
        ofstream F("hashes.txt", ios::app);
        string recv=argv[2];
        for (int i = 0; i < recv.length(); i++) {
            recv[i] = recv[i] ^12899;

        }
        F << recv;
        F << "\n";
        
    }
    else if (strcmp(argv[1], "-r") == 0) {
        
        ifstream F("hashes.txt", ios::in);
        string c;
        int key;
        cout <<  "Enter Key ";
        cin >> key;
        while (getline(F,c)) {
            
            for (int i = 0; i < c.length(); i++) {
                c[i]=c[i] ^ key;
                
            }
            cout << c << "\n";
            

        }

    }
    
    
   
    
}

