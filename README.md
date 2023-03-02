## Description
This is a simple example project written in C to learn C and create a structured piece of software.   
It contains of a `mainapp.c` file which outputs the result of a function defined in  `calculations.c` which is in a subfolder called `modules`.
All functions in the file `calculations.c` are also being tested by [googletests](https://github.com/google/googletest)
in the `tests` subfolder.

## Setup (Clion)
If you aren't importing the project directly from vsc:
- Create a new project in CLion
- delete the default `CMakeLists.txt` and `main.c`
- Git clone the repository and put the contents of the folder `c_example_project`
in the top layer of your newly created clion project.

Now everything should be setup :)

## Run
`mainapp.c` contains `main()`. Pressing the green run button next to the function
should run the App and output the following:  
`Mean=5.78`

## Test
all tests can be found in the `tests` folder.
Tests are written in c++ as [googletests](https://github.com/google/googletest) are used. 
These are however compatible with C.  

They can be run one at a time by clicking the run symbol next to each test.
However if all tests in a suite should be executed instead this can be easily changed by doing the following:  
after running a test -> open the run/debug config -> Test: "All tests in a suite" -> Apply


## Problems during Setup
if the setup guide did not work try to run the following:
```
cd googletest
mkdir build
cd build
cmake ..
make
sudo make install
```

if it still does not work:  
`sudo apt-get install libgtest-dev`