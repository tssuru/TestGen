try:
    a,b,c=9,5,7
    def f(b):
        a*=4
        b=5
        c=1
        return a+b+c
    
    a,b,c=0,9,7
    print(f(b),a,b,c)
    
except: print('error')
