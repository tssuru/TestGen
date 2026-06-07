try:
    
    a,b,c=7,8,6
    def f(a,b=9,c):
        print(a,b,c,end="")
    
    f(1,c=5,b=2)
    print(a,b,c)
    
except: print('error')
