/*

To find the minimum number of races required to determine the fastest 3 horses out of 25, we can use a divide-and-conquer approach. Since at most 5 horses can race together, we can divide the horses into groups of 5 and hold races. The winner of each race is guaranteed to be among the top 5 fastest horses.

In the first round, we can hold 5 races with 5 horses each, resulting in 5 winners. In the second round, we can hold a race with these 5 winners to determine the fastest horse. In the third round, we can hold a race with the remaining 4 horses from the second round to determine the second and third fastest horses.

Therefore, the minimum number of races required to determine the fastest 3 horses is 7 (5 races in the first round, 1 race in the second round, and 1 race in the third round).

*/