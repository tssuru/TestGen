try:
    a,b,c=1,0,7
    def f(a):
        a=1
        b-=5
        c=1
        return a+b+c
    
    a,b,c=3,8,3
    print(f(b),a,b,c)
    
except: print('error')
