try:
    a,b,c=6,8,0
    def f(a):
        global c
        a*=4
        b=2
        c=5
        return a+b+c
    
    a,b,c=2,3,1
    print(f(b),a,b,c)
    
except: print('error')
