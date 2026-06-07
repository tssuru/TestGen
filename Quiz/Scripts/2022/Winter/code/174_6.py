try:
    a,b,c=1,7,5
    def f(a):
        global c
        a-=3
        b=1
        c=4
        return a+b+c
    
    a,b,c=9,8,0
    print(f(b),a,b,c)
    
except: print('error')
