try:
    a,b,c=8,0,4
    def f(b):
        global c
        a=1
        b=1
        c=2
        return a+b+c
    
    a,b,c=0,7,5
    print(f(b),a,b,c)
    
except: print('error')
