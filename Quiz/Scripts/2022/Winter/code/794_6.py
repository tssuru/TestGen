try:
    a,b,c=3,8,5
    def f(a):
        a=5
        b-=3
        c=4
        return a+b+c
    
    a,b,c=9,0,6
    print(f(b),a,b,c)
    
except: print('error')
