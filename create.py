# pylint: disable = C0114
# Imports
import os
import sys

# Variable declarations
TEMPLATE = '''#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

}
'''
itr = int(sys.argv[1]) if (len(sys.argv) != 1) else 10

# Creating directory
if not os.path.exists("temp"):
    os.mkdir("temp")

# Creating files
for i in range(0, itr):
    with open("temp/" + str(i).zfill(len(str(itr))) + ".cpp", 'w') as file:
        file.write(TEMPLATE)
        file.close()
