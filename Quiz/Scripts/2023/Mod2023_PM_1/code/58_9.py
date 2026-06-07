try:
    a,b,c=9,6,2
    def f(a):
        a+=1
        b=1
        c=3
        return a+b+c
    
    a,b,c=3,8,4
    print(f(b),a,b,c)
    
except: print('error')
