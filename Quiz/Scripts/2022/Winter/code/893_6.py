try:
    a,b,c=3,9,2
    def f(b):
        global c
        a=1
        b-=2
        c=1
        return a+b+c
    
    a,b,c=4,8,7
    print(f(b),a,b,c)
    
except: print('error')
