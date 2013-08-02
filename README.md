findS
=====

First problem in my machine learning course

##Assumptions
I'm not an expert in machine learning algorithms, however, since the guide said use the program to determine
the number training examples needed to learn conpect X, I figured you want me to use find-S and not candidate elimination
because there was the findS implementation prior to part (b).

##Input and compilation

`make` - compilation
`make clean` - removed object files and binaries

The input to the program is just the text file with the learning examples.
e.g ./findS data.in

##Output

Here's sample output using the learning examples in the assignment specs

instance: 1 Sunny Warm Normal Strong Warm Same Yes
hypothesis: <Sunny Warm Normal Strong Warm Same >

instance: 2 Sunny Warm High Strong Warm Same Yes
hypothesis: <Sunny Warm ? Strong Warm Same >

instance: 3 Rainy Cold High Strong Warm Change No
hypothesis: <Sunny Warm ? Strong Warm Same >

instance: 4 Sunny Warm High Strong Cool Change Yes
hypothesis: <Sunny Warm ? Strong ? ? >

  ===Problem Two===
Number of examples needed to learn concept unknown
