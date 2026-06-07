try:
    a,b,c=5,0,3
    def f(a):
        global c
        a-=5
        b=4
        c=3
        return a+b+c
    
    a,b,c=8,2,6
    print(f(b),a,b,c)
    
except: print('error')
