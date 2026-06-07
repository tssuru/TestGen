try:
    a,b,c=5,8,4
    def f(a):
        global c
        a=2
        b-=1
        c=4
        return a+b+c
    
    a,b,c=2,1,5
    print(f(b),a,b,c)
    
except: print('error')
