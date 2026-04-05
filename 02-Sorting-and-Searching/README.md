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