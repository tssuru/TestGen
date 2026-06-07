try:
    a,b,c=3,0,4
    def f(b):
        a=2
        b=4
        c=2
        return a+b+c
    
    a,b,c=1,9,3
    print(f(b),a,b,c)
    
except: print('error')
