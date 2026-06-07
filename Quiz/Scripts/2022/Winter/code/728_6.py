try:
    a,b,c=4,7,8
    def f(a):
        global c
        a=1
        b-=5
        c=2
        return a+b+c
    
    a,b,c=2,0,9
    print(f(b),a,b,c)
    
except: print('error')
