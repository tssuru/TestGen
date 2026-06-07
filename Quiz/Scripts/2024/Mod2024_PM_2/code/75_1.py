try:
    a,b,c=5,1,9
    def f(a):
        global c
        a*=3
        b=1
        c=5
        return a+b+c
    
    a,b,c=6,9,1
    print(f(b),a,b,c)
    
except: print('error')
