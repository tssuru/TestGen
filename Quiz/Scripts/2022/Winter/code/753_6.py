try:
    a,b,c=7,1,8
    def f(a):
        global c
        a=5
        b+=4
        c=1
        return a+b+c
    
    a,b,c=4,6,5
    print(f(b),a,b,c)
    
except: print('error')
