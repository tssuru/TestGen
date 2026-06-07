try:
    a,b,c=3,7,8
    def f(a):
        a=4
        b*=1
        c=3
        return a+b+c
    
    a,b,c=0,2,6
    print(f(b),a,b,c)
    
except: print('error')
