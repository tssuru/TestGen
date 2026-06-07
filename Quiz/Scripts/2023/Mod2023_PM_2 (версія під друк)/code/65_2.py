try:
    a,b,c=4,6,9
    def f(a):
        global c
        a=4
        b=5
        c=1
        return a+b+c
    
    a,b,c=7,0,1
    print(f(b),a,b,c)
    
except: print('error')
