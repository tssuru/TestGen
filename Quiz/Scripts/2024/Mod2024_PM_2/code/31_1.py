try:
    a,b,c=6,9,4
    def f(b):
        a=2
        b=1
        c=4
        return a+b+c
    
    a,b,c=0,8,7
    print(f(b),a,b,c)
    
except: print('error')
