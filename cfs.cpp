/* CFS PROJECT- UNDER CONSTRUCTION
Cryptographica File Security v.1.0
For usage, type $cfs -? on the console.
*/

#include <string.h> //std::strlen
#include <math.h> //pow, floor, cos
#include <time.h> //time
#include <stdlib.h> // rand(), system(), RAND_MAX constant macro
#include <stdint.h> //uint64_t type
#include <iostream> // std::cout, std::cin, std::hex
#include <fstream> //ifstream class, open, close
#include <string> //std::string
#include <map> //map class
#include <memory> //include allocators; used by map
#include <vector> //vectors used in HAVA: HAsh Vector Algorithm 

#define ROL(x,shift,size) (x << shift) | (x >> (size-shift))
#define ROR(x,shift,size) (x >> shift) | (x << (size-shift))
char help_str = ''
//padding function:
char padding(char pad, int mode) {
    if(mode === 0) {
        //pkcs-7 padding
        while(!(strlen(pad) % 64)) {
            pad += std::hex << (strlen(pad) % 256);
        }
    } else if (mode === 1) {
        //ansi x.923 padding
        while(strlen(pad) % 64 !== 62) {
            pad += '00';
        }
        pad += std::hex << (strlen(pad)%256);
    } else if (mode === 2) {
        //ISO/IEC 7816-4 padding
        pad += '80';
        while(!(strlen(pad)%64)) {
            pad += '00';
        }
    }
    return pad;
}

int main(int argc, char* argv) {
    if(!argc | argv[0] = "/?") {
        std::cout << help; //help string
    }
}
