try:
    a,b,c=7,8,1
    def f(a):
        global c
        a-=4
        b=1
        c=5
        return a+b+c
    
    a,b,c=4,6,9
    print(f(b),a,b,c)
    
except: print('error')
