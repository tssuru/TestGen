try:
    a,b,c=5,7,4
    def f(b):
        a*=4
        b=3
        c=5
        return a+b+c
    
    a,b,c=3,2,1
    print(f(b),a,b,c)
    
except: print('error')
