try:
    
    a,b,c=6,8,7
    def f(a,b=9,c):
        print(a,b,c,end="")
    
    f(b=0,c=5,4)
    print(a,b,c)
    
except: print('error')
