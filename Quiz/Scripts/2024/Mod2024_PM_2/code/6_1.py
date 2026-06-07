try:
    a,b,c=4,2,8
    def f(a):
        global c
        a=5
        b=2
        c=5
        return a+b+c
    
    a,b,c=6,0,6
    print(f(b),a,b,c)
    
except: print('error')
