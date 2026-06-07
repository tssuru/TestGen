try:
    a,b,c=3,7,9
    def f(b):
        a=3
        b=1
        c=2
        return a+b+c
    
    a,b,c=8,2,5
    print(f(b),a,b,c)
    
except: print('error')
