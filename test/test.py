"""별찍기

입력예시: 3
  *
 ***
*****
 ***
  *
"""

def absolute(num):
    if num < 0:
        return -num
    return num

num = int(input())
for i in range(1, num*2):
    blank = absolute(num-i)
    for j in range(blank):
        print(' ', end='')
    for k in range(1+2*(num-1-blank)):
        print('*', end='')
    print()
