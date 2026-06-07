try:
    a,b,c=5,7,3
    def f(a):
        global c
        a=2
        b=1
        c=4
        return a+b+c
    
    a,b,c=0,4,2
    print(f(b),a,b,c)
    
except: print('error')
