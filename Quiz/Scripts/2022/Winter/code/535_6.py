try:
    a,b,c=5,3,1
    def f(a):
        a=2
        b-=1
        c=3
        return a+b+c
    
    a,b,c=4,8,6
    print(f(b),a,b,c)
    
except: print('error')
