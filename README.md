#Project Euler Problems#
https://projecteuler.net

I'm working my way through the [Project Euler](https://projecteuler.net/archives) archives using the C programming language to answer the problems.

##To Do's##
- [x] [Problem 1](https://projecteuler.net/problem=1)
- [x] [Problem 2](https://projecteuler.net/problem=2)
- [x] [Problem 3](https://projecteuler.net/problem=3)
- [x] [Problem 4](https://projecteuler.net/problem=4)
    - [ ] record the products that made the greatest palindrome so a * b
- [ ] [Use arrays in one of these problems](#Arrays)
- [ ] [Problem 5](https://projecteuler.net/problem=5)

##C Reference Manuals##
* [Stackoverflow Ticket](http://stackoverflow.com/questions/190006/online-c-reference-manuals)

##Snippets##

####Build and Run####

To build the c program write `make <filename-without-extension>`.

    make p1_1
    
To run the program file that the above creates write `./<filename-without-extension>`.

    ./p4.4

####Arrays####
https://www.tutorialspoint.com/cprogramming/c_arrays.htm

####Boolean Variables####
There are three options mentioned [here](http://stackoverflow.com/a/1921557), I've used the below.

    typedef enum { false, true } bool;
