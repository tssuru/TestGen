try:
    
    a,b,c=6,7,8
    def f(a,b,c=6):
        print(a,b,c,end="")
    
    f(1,2,3)
    print(a,b,c)
    
except: print('error')
