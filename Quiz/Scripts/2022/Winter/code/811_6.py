try:
    a,b,c=9,8,6
    def f(a):
        a=1
        b-=2
        c=1
        return a+b+c
    
    a,b,c=1,9,7
    print(f(b),a,b,c)
    
except: print('error')
