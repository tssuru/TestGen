try:
    a,b,c=5,7,0
    def f(b):
        global c
        a*=2
        b=4
        c=3
        return a+b+c
    
    a,b,c=9,2,6
    print(f(b),a,b,c)
    
except: print('error')
