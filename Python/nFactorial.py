# cook your dish here
def fact(num):
    res=1
    while num!=0:
        res *= num
        num=num-1 
    print(res)

t= int(input())
while t!=0:
    num = int(input())
    fact(num)
    t=t-1
