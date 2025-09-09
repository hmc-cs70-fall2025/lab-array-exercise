# CS 70 Array-Bounds Example

You need to work with this code in Visual Studio Code. Do the following:

* On GitHub, click the white “Code” button and copy the URL
* In VS Code
    - Open a new window (File -> New Window)
    - Choose “Connect to…” from the main panel of the window and then choose “Connect Current Window to Host” (or use the Command Palette: Command+Shift+P and type “Connect Current Window to Host”)
        - Enter `yourusername@cs70.cs.hmc.edu` as the host (replace `yourusername` with your actual username)
        - When prompted, enter your password
        - If you're connected, it'll show `cs70.cs.hmc.edu` in the bottom left corner of the window.
    - Once connected, click “Clone Git Repository...” in the main panel of the window and paste in the URL you copied above.
        - Choose your `/cs70/fall2025/week3lab1/sect2/groupN` subdirectory as the location to clone into (where `N` is your group number).
        - If you're not already authenticated with GitHub, it'll ask you to sign in. Follow the prompts to do so.
        - If it get's stuck on a blank page in the web browser, in VS code click cancel, and then it'll offer to try another method. Choose that and it should work.
    - Once cloned, it'll ask “Would you like to open the cloned repository?”. Click “Open” (and answer yes to the trust question).
* Select `arrays.cpp` in the file list on the left to see the code.
    - There are instructions in the comments in the code. Follow them to see what happens when you run the code in different scenarios.
    - When you need a Terminal in VS code, either select Terminal -> New Terminal from the menu bar, or press Command+Shift+` (that's the backtick, not a single quote). You can then type commands in the terminal.

As a reminder (and for easy copy-and-pasting), once you have the code open in VS code, you can build and run the code by running:

    clang++ -std=c++17 -Wall -Wextra -pedantic -c arrays.cpp && \
    clang++ -o arrays arrays.o && \
    ./arrays

## Extra Bonus Fun for Lab

IF you have a recent Mac (with an Apple Silicon chip), you can try running the code locally on your own machine to see if how your results differ.  You will need the Apple command line tools installed (which includes `clang++`).
