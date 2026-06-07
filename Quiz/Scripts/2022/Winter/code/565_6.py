try:
    a,b,c=2,1,3
    def f(a):
        a+=5
        b=1
        c=2
        return a+b+c
    
    a,b,c=7,8,9
    print(f(b),a,b,c)
    
except: print('error')
