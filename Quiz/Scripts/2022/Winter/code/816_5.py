try:
    
    a,b,c=8,7,8
    def f(a,b=9,c=6):
        print(a,b,c,end="")
    
    f(4,1)
    print(a,b,c)
    
except: print('error')
