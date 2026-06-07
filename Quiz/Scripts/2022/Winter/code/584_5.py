try:
    
    a,b,c=6,8,9
    def f(a,b,c=7):
        print(a,b,c,end="")
    
    f(5,0,1)
    print(a,b,c)
    
except: print('error')
