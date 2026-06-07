try:
    a,b,c=2,9,1
    def f(a):
        global c
        a=4
        b+=3
        c=1
        return a+b+c
    
    a,b,c=7,2,8
    print(f(b),a,b,c)
    
except: print('error')
