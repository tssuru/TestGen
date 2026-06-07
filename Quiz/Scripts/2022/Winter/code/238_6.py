try:
    a,b,c=2,6,6
    def f(b):
        a=4
        b=4
        c=2
        return a+b+c
    
    a,b,c=9,1,2
    print(f(b),a,b,c)
    
except: print('error')
