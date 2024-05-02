#include "NetworkInfiltration.h"

int infiltrateNetworkLayer(int bypassKeyA, int bypassKeyB) {
    switch (layer) {
        case 1: 
            return bypassFirewall(bypassKeyA, bypassKeyB);
        case 2:
            return bypassEncryption(bypassKeyA, bypassKeyB);
        case 3:
            return accessMainframe();
        default:
            cout << "Layer not recognized";
            return -1;
    }
}

int bypassFirewall(int firewallLevelA, int firewallLevelB) {
    int part1A = 0, part2A = 0;
    int part1B = 1, part2B = 1;
    int part1C, part2C;

    // Firewall Level A
    for (int i = 0; i <= firewallLevelA; i++) {
        part1C = part1A + part1B;
        cout << part1C << endl;
        part1A = part1B;
        part1B = part1C;
    }
    cout << "Cracked Level A...\n";

    // Firewall Level B
    for (int i = 0; i <= firewallLevelB; i++) {
        part2C = part2A + part2B;
        cout << part2C << endl;
        part2A = part2B;
        part2B = part2C;
    }
    cout << "Cracked Level B... Firewall cracked\n";

    layer += 1;
    firewallLevelA += 1;
    firewallLevelB += 1;

    return infiltrateNetworkLayer(firewallLevelA, firewallLevelB);
}

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int bypassEncryption(int encryptionLevelA, int encryptionLevelB) {
    int result = gcd(encryptionLevelA, encryptionLevelB);
    cout << "GCD of " << encryptionLevelA << " and " << encryptionLevelB << " is: " << result << "\nPlain text password found\n";

    layer += 1;

    return infiltrateNetworkLayer(encryptionLevelA, encryptionLevelB);
}


int accessMainframe() {
    cout << "Accessing Mainframe...\n";
    return 10;
}

void setLayer(int l) {
    layer = l;
}