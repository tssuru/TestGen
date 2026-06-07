try:
    a,b,c=0,4,2
    def f(a):
        global c
        a+=4
        b=2
        c=3
        return a+b+c
    
    a,b,c=3,6,5
    print(f(b),a,b,c)
    
except: print('error')
