try:
    a,b,c=6,9,8
    def f(a):
        a=2
        b=1
        c=5
        return a+b+c
    
    a,b,c=5,2,0
    print(f(b),a,b,c)
    
except: print('error')
