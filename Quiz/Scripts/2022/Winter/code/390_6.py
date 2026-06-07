try:
    a,b,c=5,4,8
    def f(b):
        global c
        a*=1
        b=5
        c=2
        return a+b+c
    
    a,b,c=0,2,9
    print(f(b),a,b,c)
    
except: print('error')
