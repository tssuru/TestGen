try:
    a,b,c=2,9,7
    def f(b):
        a-=2
        b=1
        c=1
        return a+b+c
    
    a,b,c=6,8,6
    print(f(b),a,b,c)
    
except: print('error')
