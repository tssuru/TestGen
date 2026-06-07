try:
    
    a,b,c=7,8,6
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(3,c=1,b=3)
    print(a,b,c)
    
except: print('error')
