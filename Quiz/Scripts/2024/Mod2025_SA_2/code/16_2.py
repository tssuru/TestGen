try:
    a,b,c=3,6,5
    def f(a):
        global c
        a*=5
        b=1
        c=3
        return a+b+c
    
    a,b,c=2,3,7
    print(f(b),a,b,c)
except: print('error')
