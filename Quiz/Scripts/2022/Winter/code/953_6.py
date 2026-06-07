try:
    a,b,c=2,6,1
    def f(a):
        global c
        a=4
        b*=5
        c=1
        return a+b+c
    
    a,b,c=3,8,5
    print(f(b),a,b,c)
    
except: print('error')
