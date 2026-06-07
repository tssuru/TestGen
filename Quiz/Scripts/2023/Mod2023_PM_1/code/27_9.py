try:
    a,b,c=5,7,6
    def f(a):
        a=1
        b=5
        c=2
        return a+b+c
    
    a,b,c=2,4,1
    print(f(b),a,b,c)
    
except: print('error')
