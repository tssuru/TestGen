try:
    a,b,c=7,2,4
    def f(b):
        a=1
        b-=4
        c=3
        return a+b+c
    
    a,b,c=9,8,6
    print(f(b),a,b,c)
    
except: print('error')
