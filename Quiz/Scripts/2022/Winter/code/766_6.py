try:
    a,b,c=8,4,1
    def f(a):
        a=2
        b=3
        c=4
        return a+b+c
    
    a,b,c=3,8,7
    print(f(b),a,b,c)
    
except: print('error')
