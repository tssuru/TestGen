try:
    a,b,c=2,7,3
    def f(a):
        global c
        a=5
        b=1
        c=4
        return a+b+c
    
    a,b,c=5,1,6
    print(f(b),a,b,c)
    
except: print('error')
