try:
    a,b,c=8,4,5
    def f(b):
        global c
        a=2
        b=4
        c=1
        return a+b+c
    
    a,b,c=9,0,7
    print(f(b),a,b,c)
    
except: print('error')
