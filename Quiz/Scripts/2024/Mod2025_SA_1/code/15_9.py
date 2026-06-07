try:
    a,b,c=3,2,8
    def g(b):
        a+=1
        b=4
        c=2
        return a+b+c
    
    a,b,c=9,5,8
    print(g(b),a,b,c)
except: print('error')
