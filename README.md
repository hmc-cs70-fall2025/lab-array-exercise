# CS 70 Array-Bounds Example

You need to work with this code in Visual Studio Code. Do the following:

* On GitHub, click the white “Code” button and copy the URL
* In VS Code
    - Using the remotes extension, connect to the server `cs70.cs.hmc.edu` with your username and password.
    - Once connected, clone the repository using the URL you copied above (there should be a button for this once you're connected).  Choose your `cs70` subdirectory as the location to clone into.
    - Once cloned, it'll ask if you want to open the repository. Click “Open” (and answer yes to the trust question).
* Select `arrays.cpp` in the file list on the left to see the code.
    - There are instructions in the comments in the code. Follow them to see what happens when you run the code in different scenarios.
    - When you need a Terminal in VS code, either select Terminal -> New Terminal from the menu bar, or press Command+Shift+` (that's the backtick, not a single quote). You can then type commands in the terminal.

As a reminder (and for easy copy-and-pasting), once you have the code open in VS code, you can build and run the code by running:

    clang++ -std=c++17 -Wall -Wextra -pedantic -c arrays.cpp
    clang++ -o arrays arrays.o
    ./arrays

## Extra Bonus Fun for Lab

IF you have a recent Mac (with an Apple Silicon chip), you can try running the code locally on your own machine to see if how your results differ.  You will need the Apple command line tools installed (which includes `clang++`).
