try:
    a,b,c=1,8,3
    def f(b):
        global c
        a=3
        b-=2
        c=5
        return a+b+c
    
    a,b,c=9,5,7
    print(f(b),a,b,c)
    
except: print('error')
