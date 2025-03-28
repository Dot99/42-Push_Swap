<div align="Center">
	<h1>42 Push_Swap</h1>
<h3>Because swap_push isn't as natural<br><br><br></h3>
</div>
<div align="center">
	<h2><a href="https://dot99.github.io/42-Push_Swap/">Documentation</a></h2>
</div>

## Introduction

This project comprises an interesting case study regarding sorting algorithms and its performances, being part of the core curriculum of all 42 schools worldwide. The task is simple: given a sequence of random numbers disposed in a stack data structure (**stack A**), sort them with the help of an empty auxiliary stack (**stack B**) and a set of specific stack operations. The operations allowed are described as follows, as written in our task:

- **`sa`** : **swap a** - Swap the first 2 elements at the top of stack A. Do nothing if there is only one or no element(s).
- **`sb`** : **swap b** - Swap the first 2 elements at the top of stack B. Do nothing if there is only one or no element(s).
- **`ss`** : **`sa`** and **`sb`** at the same time.
- **`pa`** : **push a** - take the first element at the top of b and put it at the top of a. Do nothing if B is empty.
- **`pb`** : **push b** - take the first element at the top of a and put it at the top of b. Do nothing if A is empty.
- **`ra`** : **rotate a** - shift up all elements of stack A by 1. The first element becomes the last one.
- **`rb`** : **rotate b** - shift up all elements of stack B by 1. The first element becomes the last one.
- **`rr`** : **`ra`** and **`rb`** at the same time.
- **`rra`** : **reverse rotate a** - shift down all elements of stack A by 1. The last element becomes the first one.
- **`rrb`** : **reverse rotate b** - shift down all elements of stack B by 1. The last element becomes the first one.
- **`rrr`** : **`rra`** and **`rrb`** at the same time.

## Algorithm 
The algorithm used was the Radix Sort since it's non-comparative sorting algorithm that sorts integers by processing individual digits. It sorts numbers digit by digit, starting from the least significant digit (LSD) to the most significant digit (MSD), using a stable sub-sorting algorithm like counting sort at each digit level. Radix sort is particularly efficient for sorting large lists of numbers with a fixed range of digits and is often used when the key size is small compared to the number of elements.

Key characteristics:

    Time Complexity: O(d * (n + b)) where n is the number of elements, d is the number of digits, and b is the base (e.g. 10 for decimal numbers).
    Stable: It preserves the relative order of equal elements.
    Non-comparative: Unlike comparison-based sorts like quicksort or mergesort, radix sort processes each digit in isolation.

Radix sort is most effective when the dataset has uniformly distributed keys with a fixed number of digits.
