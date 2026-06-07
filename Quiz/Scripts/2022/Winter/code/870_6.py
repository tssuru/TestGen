try:
    a,b,c=1,6,3
    def f(b):
        global c
        a=3
        b=5
        c=3
        return a+b+c
    
    a,b,c=4,8,4
    print(f(b),a,b,c)
    
except: print('error')
