try:
    a,b,c=0,5,9
    def f(b):
        global c
        a=5
        b=2
        c=4
        return a+b+c
    
    a,b,c=2,7,6
    print(f(b),a,b,c)
    
except: print('error')
