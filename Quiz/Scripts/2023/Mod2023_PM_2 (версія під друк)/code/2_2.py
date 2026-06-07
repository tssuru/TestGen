try:
    a,b,c=6,2,1
    def f(a):
        global c
        a+=4
        b=5
        c=3
        return a+b+c
    
    a,b,c=0,6,8
    print(f(b),a,b,c)
    
except: print('error')
