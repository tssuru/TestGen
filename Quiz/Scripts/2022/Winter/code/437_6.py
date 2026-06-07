try:
    a,b,c=0,2,7
    def f(b):
        a=5
        b=2
        c=3
        return a+b+c
    
    a,b,c=8,5,1
    print(f(b),a,b,c)
    
except: print('error')
