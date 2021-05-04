# Laboratory Exercise

## Laboratory Objectives
1. Explore and use various tools such as: GitHub, VirtualBox, Tuffix, Linux Terminal, and Atom.
1. Write and compile C++ code using:
     1. static member variable
     2. protected members and class access
1. Run and test executable files.

## Getting Started
1. Open the Terminal program in Tuffix.
1. Change the present working directory to the `Documents` directory by typing the following command at the command prompt:

    ```
    cd Documents
    ```

1. Make a copy of this Github repository on your computer using the `git` and `clone` commands that you will input to the terminal. The commands take a URL as a parameter to specify where it can get a copy of the repository. You can find the URL by clicking on the green *Clone or download* button at the top right part of this page. Copy the URL and replace the example text shown below. Note that `username` should be replaced with your own Github username. When you hit <kbd>Enter</kbd> it will ask you to provide your Github username and password. Once done, you will have a copy of the repository on your computer.
    ```
    git clone https://github.com/CSUF-CPSC121-STMAY-2021S/lab10-username.git
    ```
1. Navigate into the new directory using the command line. Note that `username` should be replaced with your own Github username.  As a shortcut, you can type the first few letters of the folder name and press <kbd>Tab</kbd> so that it auto completes the folder name for you.

     ```
     cd lab10-username
     ```
     
## Instructions
1. Title Comment Block
     1. Create your source code file named `main.cpp`, and at the very top of the source code use three one line comments to document your name, date, and the exercise, using the following format:
          <pre>Name: <i>Stephen May</i><br>Date: 01/01/2021<br>Exercise: Labxx Solution</pre>



1. Write a C++ program that performs as a Tuffy Titan Stock program which presents the user a main menu to change the stock price, purchase stock, and print a stock holder report.  The main program should accommodate an array of Wallet objects with a max size of 20.

1. Your Stock class should meet the following requirements:
     1. Declare a `Stock` class in a specification file named `stock.hpp`.  This is a simple class so no implementation file is needed.
     1. Declare a constructor member function that initializes a private static member variable to 1.0 which will keep track of the stock price.
     1. Declare a protected member function named getPrice that returns the value of the stock price.
     1. Declare a public member function named setPrice that sets the value of the stock price.

2. Your Wallet class should meet the following requirements:
     1. Declare a `Wallet` class in a specification file named `wallet.hpp`.  The Wallet class should inherit protected from the Stock class. This is a simple class so no implementation file is needed.
     1. Declare a public member functions named setName and getName that set the name of the user who purchased the shares.
     1. Declare a public member functions named setShares and getShares that set the whole number of shares purchased.
     1. Declare a public member function named getPrice that in turn calls the getPrice protected member function from the Stock class and returns the value.

1. Compile the file using the command below. The `-std` option tells the compiler that it will use C++ version 17 standards and the `-o main` option tells the compiler to place the executable code into a file called `main`.

    ```
    clang++ -std=c++17 main.cpp -o main
    ```
1. Run the program using the command below and repeat the steps above until you are satisfied your program output meets the above requirements.  I strongly suggest that you run your program using each of the sample outputs below and ensure that all blank lines and new lines are exactly as below.

    ```
    ./main
    ```


1. Typical input and output for the program:
     ```
             *** TUFFY TITAN STOCKS MAIN MENU ***

     1) Change stock price
     2) Stock holder purchase
     3) Print report of sock holders
     4) Exit the program

     Enter your choice: 2
     Enter Name: Tuffy Titan
     Enter Shares: 100

             *** TUFFY TITAN STOCKS MAIN MENU ***

     1) Change stock price
     2) Stock holder purchase
     3) Print report of sock holders
     4) Exit the program

     Enter your choice: 2
     Enter Name: Peter the Anteater
     Enter Shares: 80

             *** TUFFY TITAN STOCKS MAIN MENU ***

     1) Change stock price
     2) Stock holder purchase
     3) Print report of sock holders
     4) Exit the program

     Enter your choice: 2
     Enter Name: Joe Bruin
     Enter Shares: 95

             *** TUFFY TITAN STOCKS MAIN MENU ***

     1) Change stock price
     2) Stock holder purchase
     3) Print report of sock holders
     4) Exit the program

     Enter your choice: 3

     ================ STOCK HOLDER REPORT ================

     Name                     Shares      Price      Value
     ==================== ========== ========== ==========
     Tuffy Titan                 100       1.00     100.00
     Peter the Anteater           80       1.00      80.00
     Joe Bruin                    95       1.00      95.00

             *** TUFFY TITAN STOCKS MAIN MENU ***

     1) Change stock price
     2) Stock holder purchase
     3) Print report of sock holders
     4) Exit the program

     Enter your choice: 1
     Enter price: 2.25

             *** TUFFY TITAN STOCKS MAIN MENU ***

     1) Change stock price
     2) Stock holder purchase
     3) Print report of sock holders
     4) Exit the program

     Enter your choice: 3

     ================ STOCK HOLDER REPORT ================

     Name                     Shares      Price      Value
     ==================== ========== ========== ==========
     Tuffy Titan                 100       2.25     225.00
     Peter the Anteater           80       2.25     180.00
     Joe Bruin                    95       2.25     213.75

             *** TUFFY TITAN STOCKS MAIN MENU ***

     1) Change stock price
     2) Stock holder purchase
     3) Print report of sock holders
     4) Exit the program

     Enter your choice: 4
     ```

1. Run the unit testing program to ensure that your program runs as expected using predefined user input.

    ```
    make test
    ```
    
    <i>Note: You will be prompted to install the cmake program the first time you run the make test command on the device you are working on.  Answer `Yes` to install the program, and you will need to enter the Tuffix superuser (sudo) password, which should be `student`. After you have installed the cmake program, run the `make test` command again.</i>
    
    The unit testing will output the results of a series of tests using specific input and expected output.  Any error will stop the unit testing and will provide information on where the expected output is different from the actual output.  You will need to edit your source code to fix the error, recompile your program, and run `make test` repeatedly until it passes all the test.

## Submission
Periodically throughout the exercise, and when you have completed the exercise, **submit the complete repository to Github**.

   <pre>git add .<br>git commit -m "<i>your comment</i>"<br>git push</pre>

In case it asks you  to configure global variables for an email and name, just copy the commands it provides then replace the dummy text with your email and Github username.

   <pre>git config --global user.email "<i>tuffy@csu.fullerton.edu</i>"<br>git config --global user.name "<i>Tuffy Titan</i>"<br>git commit -m "<i>your comment</i>"<br>git push</pre>

When you completed the final Github push, go back into github.com through the browser interface and ensure all your files have been correctly updated.  You should have the following files:
    <pre>main.cpp<br>main<br>stock.hpp<br>wallet.hpp<br>unittest.xml (in the test folder)</pre>
    
## Grading
1. All points add up to a total of 100 points possible as detailed below.  Partial credit will be given where applicable.

| Points | Description |
| --- | --- |
|50|initial git clone of this repository to your Tuffix machine|
|5|main.cpp file submitted contains the main program structure and meets the program requirements|
|5|main executable file submitted runs without crashing|
|10|stock.hpp file submitted contains the Stock class declaration and meets the program requirements|
|10|wallet.hpp file submitted contains the Wallet class declaration and meets the program requirements|
|20|unit testing results submitted pass each test|
