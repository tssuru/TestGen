try:
    a,b,c=3,8,6
    def f(a):
        global c
        a+=2
        b=5
        c=3
        return a+b+c
    
    a,b,c=7,3,1
    print(f(b),a,b,c)
    
except: print('error')
