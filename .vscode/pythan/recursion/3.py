def cal_sum(n):
  if(n==0):
      return 0
  return n +cal_sum(n-1)

sum=cal_sum(5)
print(sum)