try:
    a,b,c=7,9,5
    def f(a):
        a=1
        b-=4
        c=1
        return a+b+c
    
    a,b,c=4,5,1
    print(f(b),a,b,c)
    
except: print('error')
