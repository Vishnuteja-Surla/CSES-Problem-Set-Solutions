# Introductory Problems

## Problems

### 1. Weird Algorithm
[View Solution](./001-Weird-Algorithm.cpp) | [CSES Link](https://cses.fi/problemset/task/1068)

<details>
<summary><strong>Show Problem Statement</strong></summary>

Consider an algorithm that takes as input a positive integer $n$. If $n$ is even, the algorithm divides it by two, and if $n$ is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until $n$ is one. For example, the sequence for $n=3$ is as follows:

$$3 \rightarrow 10 \rightarrow 5 \rightarrow 16 \rightarrow 8 \rightarrow 4 \rightarrow 2 \rightarrow 1$$

Your task is to simulate the execution of the algorithm for a given value of $n$.

**Input**

The only input line has an integer $n$.

**Output**

Print a line that contains all values of $n$ during the algorithm.

**Constraints**
- $1 \le n \le 10^6$

**Example**


```text
Input:
3

Output:
3 10 5 16 8 4 2 1
```
</details>

---

### 2. Missing Number
[View Solution](./002-Missing-Number.cpp) | [CSES Link](https://cses.fi/problemset/task/1083)

<details>
<summary><strong>Show Problem Statement</strong></summary>

You are given all numbers between $1,2,\ldots,n$ except one. Your task is to find the missing number.

**Input**

The only input line has an integer $n$.

**Output**

Print a line that contains all values of $n$ during the algorithm.

**Constraints**
- $2 \le n \le 2 \cdot 10^5$

**Example**

```text
Input:
5
2 3 1 5

Output:
4
```
</details>

---

### 3. Repetitions
[View Solution](./003-Repetitions.cpp) | [CSES Link](https://cses.fi/problemset/task/1069)

<details>
<summary><strong>Show Problem Statement</strong></summary>

You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.

**Input**

The only input line contains a string of $n$ characters.

**Output**

Print one integer: the length of the longest repetition.

**Constraints**
- $1 \le n \le 10^6$

**Example**

```text
Input:
ATTCGGGA

Output:
3
```
</details>

---

### 6. Missing Number
[View Solution](./006-Number-Spiral.cpp) | [CSES Link](https://cses.fi/problemset/task/1071)

<details>
<summary><strong>Show Problem Statement</strong></summary>

A number spiral is an infinite grid whose upper-left square has number $1$. Here are the first five layers of the spiral:

![Sample-Grid](https://cses.fi/file/bba36f2601b99c7edc15865aa2a49e680a271075f30e86aa0e4e18d00a779c21)

Your task is to find out the number in row $y$ and column $x$.

**Input**

The first input line contains an integer $t$: the number of tests.

After this, there are $t$ lines, each containing integers $y$ and $x$.

**Output**

For each test, print the number in row $y$ and column $x$.

**Constraints:-**

- $1 \le t \le 10^5$
- $1 \le y,x \le 10^9$

**Example**

```text
Input:
3
2 3
1 1
4 2

Output:
8
1
15
```
</details>

---