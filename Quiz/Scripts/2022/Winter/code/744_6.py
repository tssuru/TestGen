try:
    a,b,c=5,3,1
    def f(b):
        global c
        a=4
        b=2
        c=3
        return a+b+c
    
    a,b,c=0,6,2
    print(f(b),a,b,c)
    
except: print('error')
