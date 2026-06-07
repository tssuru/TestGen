try:
    
    a,b,c=7,8,6
    def f(a,b=9,c):
        print(a,b,c,end="")
    
    f(2,c=2,b=3)
    print(a,b,c)
    
except: print('error')
