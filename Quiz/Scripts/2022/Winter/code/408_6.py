try:
    a,b,c=4,2,8
    def f(a):
        global c
        a-=5
        b=4
        c=2
        return a+b+c
    
    a,b,c=0,5,6
    print(f(b),a,b,c)
    
except: print('error')
