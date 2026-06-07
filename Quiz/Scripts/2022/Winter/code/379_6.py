try:
    a,b,c=3,2,5
    def f(a):
        global c
        a-=1
        b=4
        c=5
        return a+b+c
    
    a,b,c=8,1,0
    print(f(b),a,b,c)
    
except: print('error')
