try:
    
    a,b,c=9,8,7
    def f(a,b=9,c):
        print(a,b,c,end="")
    
    f(3,1,2)
    print(a,b,c)
    
except: print('error')
