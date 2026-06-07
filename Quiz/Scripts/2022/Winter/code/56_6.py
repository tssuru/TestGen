try:
    a,b,c=8,4,5
    def f(b):
        global c
        a*=1
        b=4
        c=4
        return a+b+c
    
    a,b,c=2,2,1
    print(f(b),a,b,c)
    
except: print('error')
