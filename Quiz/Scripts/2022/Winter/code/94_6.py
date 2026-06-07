try:
    a,b,c=2,9,7
    def f(b):
        global c
        a=2
        b*=3
        c=4
        return a+b+c
    
    a,b,c=1,0,3
    print(f(b),a,b,c)
    
except: print('error')
