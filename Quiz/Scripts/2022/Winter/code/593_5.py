try:
    
    a,b,c=6,7,8
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(1,c=3,b=4)
    print(a,b,c)
    
except: print('error')
