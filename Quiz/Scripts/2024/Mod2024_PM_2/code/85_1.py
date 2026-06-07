try:
    a,b,c=8,4,0
    def f(b):
        a=1
        b=3
        c=1
        return a+b+c
    
    a,b,c=2,7,2
    print(f(b),a,b,c)
    
except: print('error')
