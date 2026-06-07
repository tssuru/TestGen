try:
    a,b,c=1,0,6
    def f(a):
        a=2
        b+=1
        c=3
        return a+b+c
    
    a,b,c=2,1,7
    print(f(b),a,b,c)
    
except: print('error')
