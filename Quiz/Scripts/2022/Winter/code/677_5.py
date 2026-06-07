try:
    
    a,b,c=8,7,6
    def f(a,b=9,c=6):
        print(a,b,c,end="")
    
    f(3,1,b=3)
    print(a,b,c)
    
except: print('error')
