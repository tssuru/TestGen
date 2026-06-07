try:
    a,b,c=8,9,4
    def f(b):
        a*=2
        b=3
        c=4
        return a+b+c
    
    a,b,c=7,5,2
    print(f(b),a,b,c)
    
except: print('error')
