try:
    a,b,c=0,8,1
    def f(a):
        global c
        a=4
        b-=3
        c=1
        return a+b+c
    
    a,b,c=9,5,6
    print(f(b),a,b,c)
    
except: print('error')
