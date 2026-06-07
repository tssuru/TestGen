try:
    a,b,c=3,9,0
    def f(a):
        a+=1
        b=5
        c=4
        return a+b+c
    
    a,b,c=4,4,2
    print(f(b),a,b,c)
    
except: print('error')
