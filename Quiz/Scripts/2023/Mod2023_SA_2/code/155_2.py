try:
    a,b,c=5,1,3
    def f(b):
        global c
        a=4
        b-=2
        c=4
        return a+b+c
    
    a,b,c=8,6,7
    print(f(b),a,b,c)
    
except: print('error')
