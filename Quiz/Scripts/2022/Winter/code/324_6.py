try:
    a,b,c=0,8,3
    def f(a):
        global c
        a-=3
        b=5
        c=1
        return a+b+c
    
    a,b,c=4,4,1
    print(f(b),a,b,c)
    
except: print('error')
