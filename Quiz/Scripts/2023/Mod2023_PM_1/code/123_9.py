try:
    a,b,c=9,1,3
    def f(b):
        a=5
        b=2
        c=4
        return a+b+c
    
    a,b,c=6,7,5
    print(f(b),a,b,c)
    
except: print('error')
