try:
    a,b,c=2,9,5
    def g(b):
        global c
        a+=1
        b=3
        c=5
        return a+b+c
    
    a,b,c=0,3,8
    print(g(b),a,b,c)
    
except: print('error')
