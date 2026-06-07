try:
    a,b,c=1,5,8
    def f(a):
        a=4
        b-=2
        c=5
        return a+b+c
    
    a,b,c=7,1,4
    print(f(b),a,b,c)
    
except: print('error')
