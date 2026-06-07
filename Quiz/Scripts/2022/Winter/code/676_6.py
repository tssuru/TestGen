try:
    a,b,c=7,3,7
    def f(b):
        global c
        a=5
        b=4
        c=2
        return a+b+c
    
    a,b,c=8,2,6
    print(f(b),a,b,c)
    
except: print('error')
