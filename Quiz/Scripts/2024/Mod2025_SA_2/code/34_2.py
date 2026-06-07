try:
    a,b,c=3,5,8
    def f(a):
        a-=1
        b=5
        c=4
        return a+b+c
    
    a,b,c=6,0,7
    print(f(b),a,b,c)
except: print('error')
