try:
    
    a,b,c=7,6,8
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(b=1,c=5,2)
    print(a,b,c)
    
except: print('error')
