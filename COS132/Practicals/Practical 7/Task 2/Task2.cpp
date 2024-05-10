#include "Decipher.h"
#include "StringUtils.h"
#include <iostream>

using namespace std;
int main() {
    int code1 = 121;  // A palindrome
    int code2 = 153;  // An Armstrong number (not a perfect number)

    string enc1 = "Bejwheva pda zalhkuiajp kb pda oqnraehhwjya japskng xu M3 xabkna pda qlykiejc ahaypekjo";
    string enc2 = "Vejliv rcc dvuzr tfekifc gifkftfcj riv rtkzmv svwfiv kyv X20 jlddzk";
    
    std::cout << "Encoded strings: \n\t" << enc1 << "\n\t" << enc2 << std::endl;

    string decoded = decipher(code1, enc1, code2, enc2);

    std::cout << "Decoded strings:\n" << decoded << std::endl;

    return 0;
}

/* 
Expected output:

Encoded strings: 
        Bejwheva pda zalhkuiajp kb pda oqnraehhwjya japskng xu M3 xabkna pda qlykiejc ahaypekjo
        Vejliv rcc dvuzr tfekifc gifkftfcj riv rtkzmv svwfiv kyv X20 jlddzk
Decoded strings:
Finalize the deployment of the surveillance network by Q3 before the upcoming elections-Ensure all media control protocols are active before the G20 summit
*/