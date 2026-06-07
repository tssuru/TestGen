try:
    a,b,c=9,5,3
    def f(b):
        a=1
        b=3
        c=5
        return a+b+c
    
    a,b,c=2,0,1
    print(f(b),a,b,c)
    
except: print('error')
