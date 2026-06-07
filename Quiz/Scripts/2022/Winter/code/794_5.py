try:
    
    a,b,c=6,7,8
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(c=3,b=5,a=4)
    print(a,b,c)
    
except: print('error')
