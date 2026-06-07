try:
    a,b,c=1,3,9
    def f(a):
        global c
        a-=2
        b=3
        c=2
        return a+b+c
    
    a,b,c=0,1,4
    print(f(b),a,b,c)
    
except: print('error')
