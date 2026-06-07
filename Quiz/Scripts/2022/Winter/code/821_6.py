try:
    a,b,c=9,0,5
    def f(a):
        global c
        a-=3
        b=5
        c=2
        return a+b+c
    
    a,b,c=7,2,1
    print(f(b),a,b,c)
    
except: print('error')
