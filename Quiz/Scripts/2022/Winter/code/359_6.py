try:
    a,b,c=2,0,8
    def f(a):
        global c
        a-=1
        b=2
        c=4
        return a+b+c
    
    a,b,c=6,4,5
    print(f(b),a,b,c)
    
except: print('error')
