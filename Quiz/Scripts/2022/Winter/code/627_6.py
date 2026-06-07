try:
    a,b,c=2,3,0
    def f(a):
        global c
        a=4
        b=5
        c=1
        return a+b+c
    
    a,b,c=4,8,5
    print(f(b),a,b,c)
    
except: print('error')
