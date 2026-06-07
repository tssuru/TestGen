try:
    a,b,c=6,9,1
    def f(a):
        global c
        a=3
        b+=5
        c=1
        return a+b+c
    
    a,b,c=5,3,8
    print(f(b),a,b,c)
    
except: print('error')
