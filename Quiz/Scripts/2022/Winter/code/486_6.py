try:
    a,b,c=5,4,6
    def f(b):
        a=3
        b=5
        c=2
        return a+b+c
    
    a,b,c=0,6,4
    print(f(b),a,b,c)
    
except: print('error')
