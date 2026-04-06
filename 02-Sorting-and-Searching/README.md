# Sorting and Searching

## Problems

### 25. Distinct Numbers
[View Solution](./025-Distinct-Numbers.cpp) | [CSES Link](https://cses.fi/problemset/task/1621)

<details>
<summary><strong>Show Problem Statement</strong></summary>

You are given a list of $n$ integers, and your task is to calculate the number of distinct values in the list.

**Input**

The first input line has an integer $n$: the number of values.

The second line has n integers $x_1,x_2,\dots,x_n$.

**Output**

Print one integers: the number of distinct values.

**Constraints**
- $1 \le n \le 2 \cdot 10^5$
- $1 \le x_i \le 10^9$

**Example**


```text
Input:
5
2 3 2 2 3

Output:
2
```
</details>

---

### 26. Apartments
[View Solution](./026-Apartments.cpp) | [CSES Link](https://cses.fi/problemset/task/1084)

<details>
<summary><strong>Show Problem Statement</strong></summary>

There are $n$ applicants and $m$ free apartments. Your task is to distribute the apartments so that as many applicants as possible will get an apartment.

Each applicant has a desired apartment size, and they will accept any apartment whose size is close enough to the desired size.

**Input**

The first input line has three integers $n$, $m$, and $k$: the number of applicants, the number of apartments, and the maximum allowed difference.

The next line contains $n$ integers $a_1, a_2, \ldots, a_n$: the desired apartment size of each applicant. If the desired size of an applicant is $x$, they will accept any apartment whose size is between $x-k$ and $x+k$.

The last line contains $m$ integers $b_1, b_2, \ldots, b_m$: the size of each apartment.

**Output**

Print one integer: the number of applicants who will get an apartment.

**Constraints**
- $1 \le n, m \le 2 \cdot 10^5$
- $0 \le k \le 10^9$
- $1 \le a_i, b_i \le 10^9$

**Example**


```text
Input:
4 3 5
60 45 80 60
30 60 75

Output:
2
```
</details>

---

### 27. Ferris Wheel
[View Solution](./027-Ferris-Wheel.cpp) | [CSES Link](https://cses.fi/problemset/task/1090)

<details>
<summary><strong>Show Problem Statement</strong></summary>

There are $n$ children who want to go to a Ferris wheel, and your task is to find a gondola for each child.

Each gondola may have one or two children in it, and in addition, the total weight in a gondola may not exceed $x$. You know the weight of every child.

What is the minimum number of gondolas needed for the children?

**Input**

The first input line contains two integers $n$ and $x$: the number of children and the maximum allowed weight.

The next line contains $n$ integers $p_1,p_2,\ldots,p_n$: the weight of each child.

**Output**

Print one integer: the minimum number of gondolas.

**Constraints**
- $1 \le n \le 2 \cdot 10^5$
- $1 \le x \le 10^9$
- $1 \le p_i \le x$

**Example**


```text
Input:
4 10
7 2 3 9

Output:
3
```
</details>

---


### 28. Concert Tickets
[View Solution](./028-Concert-Tickets.cpp) | [CSES Link](https://cses.fi/problemset/task/1091)

<details>
<summary><strong>Show Problem Statement</strong></summary>

There are $n$ concert tickets available, each with a certain price. Then, $m$ customers arrive, one after another.

Each customer announces the maximum price they are willing to pay for a ticket, and after this, they will get a ticket with the nearest possible price such that it does not exceed the maximum price.

**Input**

The first input line contains integers $n$ and $m$: the number of tickets and the number of customers.

The next line contains $n$ integers $h_1,h_2,\ldots,h_n$: the price of each ticket.

The last line contains $m$ integers $t_1,t_2,\ldots,t_m$: the maximum price for each customer in the order they arrive.

**Output**

Print, for each customer, the price that they will pay for their ticket. After this, the ticket cannot be purchased again.

If a customer cannot get any ticket, print $-1$.

**Constraints**
- $1 \le n, m \le 2 \cdot 10^5$
- $1 \le h_i, t_i \le 10^9$

**Example**


```text
Input:
5 3
5 3 7 8 5
4 8 3

Output:
3
8
-1
```
</details>

---