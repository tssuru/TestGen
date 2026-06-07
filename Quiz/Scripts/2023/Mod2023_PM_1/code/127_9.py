try:
    a,b,c=8,3,9
    def f(a):
        a=1
        b*=4
        c=4
        return a+b+c
    
    a,b,c=7,8,0
    print(f(b),a,b,c)
    
except: print('error')
