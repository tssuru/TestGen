try:
    a,b,c=2,4,8
    def f(b):
        a*=2
        b=1
        c=5
        return a+b+c
    
    a,b,c=1,5,7
    print(f(b),a,b,c)
    
except: print('error')
