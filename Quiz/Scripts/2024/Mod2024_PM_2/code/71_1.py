try:
    a,b,c=3,2,8
    def f(a):
        global c
        a=2
        b=3
        c=5
        return a+b+c
    
    a,b,c=9,6,1
    print(f(b),a,b,c)
    
except: print('error')
