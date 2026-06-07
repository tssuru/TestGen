try:
    a,b,c=2,9,6
    def f(a):
        a-=1
        b=3
        c=5
        return a+b+c
    
    a,b,c=0,3,8
    print(f(b),a,b,c)
    
except: print('error')
