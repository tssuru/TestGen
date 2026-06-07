try:
    
    a,b,c=9,8,7
    def f(a,b=9,c=6):
        print(a,b,c,end="")
    
    f(0,1,b=4)
    print(a,b,c)
    
except: print('error')
