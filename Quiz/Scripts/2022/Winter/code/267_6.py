try:
    a,b,c=3,6,9
    def f(a):
        a=3
        b*=5
        c=1
        return a+b+c
    
    a,b,c=1,8,7
    print(f(b),a,b,c)
    
except: print('error')
