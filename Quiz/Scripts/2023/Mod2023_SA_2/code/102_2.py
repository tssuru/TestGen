try:
    a,b,c=7,9,1
    def f(a):
        global c
        a=3
        b=1
        c=5
        return a+b+c
    
    a,b,c=2,8,6
    print(f(b),a,b,c)
    
except: print('error')
