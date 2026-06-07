try:
    a,b,c=3,0,2
    def f(b):
        global c
        a=5
        b=4
        c=3
        return a+b+c
    
    a,b,c=8,5,4
    print(f(b),a,b,c)
    
except: print('error')
