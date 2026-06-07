try:
    
    a,b,c=9,7,8
    def f(a,b=6,c):
        print(a,b,c,end="")
    
    f(4,3,b=1)
    print(a,b,c)
    
except: print('error')
