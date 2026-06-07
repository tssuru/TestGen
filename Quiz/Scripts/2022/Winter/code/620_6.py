try:
    a,b,c=1,7,3
    def f(a):
        a+=3
        b=1
        c=5
        return a+b+c
    
    a,b,c=5,8,6
    print(f(b),a,b,c)
    
except: print('error')
