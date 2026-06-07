try:
    a,b,c=8,9,2
    def f(a):
        global c
        a-=4
        b=4
        c=3
        return a+b+c
    
    a,b,c=1,3,0
    print(f(b),a,b,c)
    
except: print('error')
