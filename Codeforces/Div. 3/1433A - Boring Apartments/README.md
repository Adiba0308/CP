# A. Boring Apartments
 
| Field | Value |
|---|---|
| **Contest** | [1433](https://codeforces.com/contest/1433) |
| **Problem** | [1433A — Boring Apartments](https://codeforces.com/contest/1433/problem/A) |
| **Rating** | 800 |
| **Tags** | implementation, math |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 15 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

There is a building consisting of `10~000` apartments numbered from `1` to `10~000`, inclusive.

Call an apartment **boring**, if its number consists of *the same digit*. Examples of boring apartments are `11, 2, 777, 9999` and so on.

Our character is a troublemaker, and he calls the intercoms of all **boring** apartments, till someone answers the call, in the following order:

 - First he calls all apartments consisting of digit `1`, in increasing order (`1, 11, 111, 1111`).
- Next he calls all apartments consisting of digit `2`, in increasing order (`2, 22, 222, 2222`)
- And so on.

The resident of the boring apartment `x` answers the call, and our character **stops** calling anyone further.

Our character wants to know how many digits he pressed in total and your task is to help him to count the total number of keypresses.

For example, if the resident of boring apartment `22` answered, then our character called apartments with numbers `1, 11, 111, 1111, 2, 22` and the total number of digits he pressed is `1 + 2 + 3 + 4 + 1 + 2 = 13`.

You have to answer `t` independent test cases.

## Input

The first line of the input contains one integer `t` (`1 ≤ t ≤ 36`) — the number of test cases.

The only line of the test case contains one integer `x` (`1 ≤ x ≤ 9999`) — the apartment number of the resident who answered the call. It is guaranteed that `x` consists of the same digit.

## Output

For each test case, print the answer: how many digits our character pressed in total.

## Examples

**Example:**

```
4
22
9999
1
777

```

**Output:**

```
13
90
1
66

```

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1433/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
