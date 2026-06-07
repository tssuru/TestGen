try:
    
    a,b,c=7,6,8
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(5,c=1,b=0)
    print(a,b,c)
    
except: print('error')
