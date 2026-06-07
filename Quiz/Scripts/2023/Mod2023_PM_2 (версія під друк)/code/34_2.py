try:
    a,b,c=1,0,2
    def f(b):
        a=3
        b=1
        c=2
        return a+b+c
    
    a,b,c=5,4,6
    print(f(b),a,b,c)
    
except: print('error')
