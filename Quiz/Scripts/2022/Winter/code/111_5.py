try:
    
    a,b,c=7,8,9
    def f(a,b,c=7):
        print(a,b,c,end="")
    
    f(b=5,c=0,3)
    print(a,b,c)
    
except: print('error')
