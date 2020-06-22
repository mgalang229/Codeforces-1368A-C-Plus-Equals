# Codeforces-1368A-C-Plus-Equals
### Problem
![](capture.png)
### Program Simulation
<pre>
  Sample Input: 1 2 3

  if 1 < 2
  c = a // 1
  c = 1
  a = b // 2
  a =  2
  b = c // 1
  b = 1

  cnt = 0

  first loop 

  if cnt is even // not omitted
  b += a // 1 + 2 = 3
  b = 3
  c = b // 3
  c = 3
  cnt++
  cnt = 1
  if(3 > 3) break // omitted

  loop again

  if cnt is even // omitted
  a += b // 2 + 3 = 5
  a = 5
  c = a // 5
  c = 5
  cnt++ 
  cnt = 2
  if(5 > 3) break // not omitted

  end loop

  print cnt

  Final Output:
  2
</pre>
