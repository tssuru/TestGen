try:
    a,b,c=3,9,8
    def f(a):
        global c
        a+=4
        b=1
        c=5
        return a+b+c
    
    a,b,c=1,4,0
    print(f(b),a,b,c)
    
except: print('error')
