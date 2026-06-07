try:
    a,b,c=1,5,6
    def f(a):
        global c
        a=1
        b+=4
        c=3
        return a+b+c
    
    a,b,c=0,4,8
    print(f(b),a,b,c)
    
except: print('error')
