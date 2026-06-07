try:
    a,b,c=1,3,9
    def f(b):
        global c
        a=2
        b=1
        c=1
        return a+b+c
    
    a,b,c=6,9,8
    print(f(b),a,b,c)
    
except: print('error')
