## **O. 社點** ***<font color = '#AAAAAA'> Dessert </font>***

`time limit` 1s
`memory limit` 256MB

### ***Statement***

一年一度的資訊社大亂鬥又開始了

作為去年比賽的冠軍－－***ZhenZhe*** 電神成功地當上了出題者並有權決定社點，然而 ***Mingyee*** 表示因為社點不是冰炫風所以他不想來。

作為社團內的技術顧問，你必須幫 ***ZhenZhe*** 想辦法讓 ***Mingyee*** 留下來。

你想到了一個辦法，也就是用一整排的 **珍奶** 試圖偽裝冰炫風來蒙混過關。

而 ***Mingyee*** 也沒這麼好騙，只有當 **珍奶** 的美味程度 $a_{(i,j)},\ \forall\ 1 \leq j \leq n_i, 1 \leq i \leq N$ 總和為 $k_i,\ \forall\ 1 \leq i \leq N$ 時，他才會被騙。

於是你決定從現有的 **珍奶** 挑一些來試圖欺騙他，在挑選的珍奶們皆相鄰的情況下，試問有多少種欺騙 ***Mingyee*** 的方法?

`註:` ***Mingyee*** 說會請 ***AC*** 的人跟 ***ysh*** 吃冰炫風。

<!-- 給定一陣列 $<a>$ ，試問有多少種 $(l,r)$ 使得 $\displaystyle \sum_{i=l}^r a_i = k$ -->

### ***Input***

$N$
$n_1$ $k_1$
$a_{(1,1)}$ $a_{(1,2)}$ ... $a_{(1,n_1)}$
...
$n_N$ $k_N$
$a_{(N,1)}$ $a_{(N,2)}$ ... $a_{(N,n_N)}$

### ***Output***

$Ans_1$
$Ans_2$
...
$Ans_N$

<div class = 'page' />

### ***Sample Input***

```
10
10 16
1 1 1 1 3 1 2 2 2 3
10 24
3 2 1 3 3 2 2 3 2 1
10 4
3 2 2 2 2 1 1 2 3 1
10 20
3 1 3 1 1 1 2 2 1 3
10 6
3 3 2 1 2 1 1 1 3 2
10 18
1 3 3 3 2 2 3 2 3 1
10 25
2 3 3 3 1 2 1 1 2 1
10 24
1 2 2 3 1 2 2 2 3 3
10 6
3 2 1 1 1 1 1 2 1 3
10 17
1 1 3 2 3 1 1 1 2 1
```

### ***Sample Output***

```
1
0
6
0
6
2
0
0
5
0
```

<div class = 'page' />

### ***Note***

 - $0 \leq n_i \leq 10^6,\ \forall\ 1 \leq i \leq N$
 - $1 \leq k_i \leq 10^9 \times N_i,\ \forall\ 1 \leq i \leq N$
 - $1 \leq a_{(i,j)} \leq 10 ^ 9,\ \forall\ 1 \leq j \leq n_i, 1 \leq i \leq N$
 - $\displaystyle \sum_{k=1}^N n_k \leq 3 \times 10 ^ 6$
 - 這題是 ***CJ*** 第一題，也是 ***CITRC $23^{rd}$*** 出的第一題，感謝 ***willy*** 電神


### ***Subtask***

 - ***subtask1***: $1\\%$ $N \leq 10, n_i \leq 10, a_{(i,j)} \leq 10,\ \forall\ 1 \leq j \leq n_i, 1 \leq i \leq N$
 - ***subtask2***: $2\\%$ $N \leq 10, n_i \leq 100, a_{(i,j)} \leq 10,\ \forall\ 1 \leq j \leq n_i, 1 \leq i \leq N$
 - ***subtask3***: $7\\%$ $N \leq 10 ^ 4, n_i \leq 10 ^ 3, a_{(i,j)} \leq 10,\ \forall\ 1 \leq j \leq n_i, 1 \leq i \leq N$
 - ***subtask4***: $30\\%$ $n_i \leq 10 ^ 5,\ \forall\ 1 \leq i \leq N$
 - ***subtask5***: $60\\%$ $n_i \leq 10 ^ 6,\ \forall\ 1 \leq i \leq N$