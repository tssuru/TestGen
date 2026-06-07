try:
    a,b,c=5,7,2
    def f(a):
        global c
        a=3
        b=4
        c=2
        return a+b+c
    
    a,b,c=9,7,1
    print(f(b),a,b,c)
    
except: print('error')
